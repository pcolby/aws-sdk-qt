// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTAUTHORIZATIONDETAILSRESPONSE_H
#define QTAWS_GETACCOUNTAUTHORIZATIONDETAILSRESPONSE_H

#include "iamresponse.h"
#include "getaccountauthorizationdetailsrequest.h"

namespace QtAws {
namespace Iam {

class GetAccountAuthorizationDetailsResponsePrivate;

class QTAWSIAM_EXPORT GetAccountAuthorizationDetailsResponse : public IamResponse {
    Q_OBJECT

public:
    GetAccountAuthorizationDetailsResponse(const GetAccountAuthorizationDetailsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAccountAuthorizationDetailsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAccountAuthorizationDetailsResponse)
    Q_DISABLE_COPY(GetAccountAuthorizationDetailsResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
