// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDOMAINASSOCIATIONREQUEST_H
#define QTAWS_CREATEDOMAINASSOCIATIONREQUEST_H

#include "amplifyrequest.h"

namespace QtAws {
namespace Amplify {

class CreateDomainAssociationRequestPrivate;

class QTAWSAMPLIFY_EXPORT CreateDomainAssociationRequest : public AmplifyRequest {

public:
    CreateDomainAssociationRequest(const CreateDomainAssociationRequest &other);
    CreateDomainAssociationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDomainAssociationRequest)

};

} // namespace Amplify
} // namespace QtAws

#endif
