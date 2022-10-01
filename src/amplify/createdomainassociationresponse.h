// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDOMAINASSOCIATIONRESPONSE_H
#define QTAWS_CREATEDOMAINASSOCIATIONRESPONSE_H

#include "amplifyresponse.h"
#include "createdomainassociationrequest.h"

namespace QtAws {
namespace Amplify {

class CreateDomainAssociationResponsePrivate;

class QTAWSAMPLIFY_EXPORT CreateDomainAssociationResponse : public AmplifyResponse {
    Q_OBJECT

public:
    CreateDomainAssociationResponse(const CreateDomainAssociationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDomainAssociationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDomainAssociationResponse)
    Q_DISABLE_COPY(CreateDomainAssociationResponse)

};

} // namespace Amplify
} // namespace QtAws

#endif
