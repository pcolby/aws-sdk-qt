// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPARALLELDATAREQUEST_H
#define QTAWS_UPDATEPARALLELDATAREQUEST_H

#include "translaterequest.h"

namespace QtAws {
namespace Translate {

class UpdateParallelDataRequestPrivate;

class QTAWSTRANSLATE_EXPORT UpdateParallelDataRequest : public TranslateRequest {

public:
    UpdateParallelDataRequest(const UpdateParallelDataRequest &other);
    UpdateParallelDataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateParallelDataRequest)

};

} // namespace Translate
} // namespace QtAws

#endif
