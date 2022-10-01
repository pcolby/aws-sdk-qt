// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPARALLELDATAREQUEST_H
#define QTAWS_CREATEPARALLELDATAREQUEST_H

#include "translaterequest.h"

namespace QtAws {
namespace Translate {

class CreateParallelDataRequestPrivate;

class QTAWSTRANSLATE_EXPORT CreateParallelDataRequest : public TranslateRequest {

public:
    CreateParallelDataRequest(const CreateParallelDataRequest &other);
    CreateParallelDataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateParallelDataRequest)

};

} // namespace Translate
} // namespace QtAws

#endif
