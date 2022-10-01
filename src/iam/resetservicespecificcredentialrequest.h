// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETSERVICESPECIFICCREDENTIALREQUEST_H
#define QTAWS_RESETSERVICESPECIFICCREDENTIALREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class ResetServiceSpecificCredentialRequestPrivate;

class QTAWSIAM_EXPORT ResetServiceSpecificCredentialRequest : public IamRequest {

public:
    ResetServiceSpecificCredentialRequest(const ResetServiceSpecificCredentialRequest &other);
    ResetServiceSpecificCredentialRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResetServiceSpecificCredentialRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
