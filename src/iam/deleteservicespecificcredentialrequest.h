// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVICESPECIFICCREDENTIALREQUEST_H
#define QTAWS_DELETESERVICESPECIFICCREDENTIALREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class DeleteServiceSpecificCredentialRequestPrivate;

class QTAWSIAM_EXPORT DeleteServiceSpecificCredentialRequest : public IamRequest {

public:
    DeleteServiceSpecificCredentialRequest(const DeleteServiceSpecificCredentialRequest &other);
    DeleteServiceSpecificCredentialRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteServiceSpecificCredentialRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
