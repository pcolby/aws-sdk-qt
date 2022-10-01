// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINASSOCIATIONRESPONSE_H
#define QTAWS_GETDOMAINASSOCIATIONRESPONSE_H

#include "amplifyresponse.h"
#include "getdomainassociationrequest.h"

namespace QtAws {
namespace Amplify {

class GetDomainAssociationResponsePrivate;

class QTAWSAMPLIFY_EXPORT GetDomainAssociationResponse : public AmplifyResponse {
    Q_OBJECT

public:
    GetDomainAssociationResponse(const GetDomainAssociationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDomainAssociationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDomainAssociationResponse)
    Q_DISABLE_COPY(GetDomainAssociationResponse)

};

} // namespace Amplify
} // namespace QtAws

#endif
