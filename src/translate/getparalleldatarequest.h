// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPARALLELDATAREQUEST_H
#define QTAWS_GETPARALLELDATAREQUEST_H

#include "translaterequest.h"

namespace QtAws {
namespace Translate {

class GetParallelDataRequestPrivate;

class QTAWSTRANSLATE_EXPORT GetParallelDataRequest : public TranslateRequest {

public:
    GetParallelDataRequest(const GetParallelDataRequest &other);
    GetParallelDataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetParallelDataRequest)

};

} // namespace Translate
} // namespace QtAws

#endif
