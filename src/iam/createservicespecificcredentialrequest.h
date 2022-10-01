// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESERVICESPECIFICCREDENTIALREQUEST_H
#define QTAWS_CREATESERVICESPECIFICCREDENTIALREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class CreateServiceSpecificCredentialRequestPrivate;

class QTAWSIAM_EXPORT CreateServiceSpecificCredentialRequest : public IamRequest {

public:
    CreateServiceSpecificCredentialRequest(const CreateServiceSpecificCredentialRequest &other);
    CreateServiceSpecificCredentialRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateServiceSpecificCredentialRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
