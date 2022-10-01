// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIDENTITYPOOLRESPONSE_H
#define QTAWS_DESCRIBEIDENTITYPOOLRESPONSE_H

#include "cognitoidentityresponse.h"
#include "describeidentitypoolrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class DescribeIdentityPoolResponsePrivate;

class QTAWSCOGNITOIDENTITY_EXPORT DescribeIdentityPoolResponse : public CognitoIdentityResponse {
    Q_OBJECT

public:
    DescribeIdentityPoolResponse(const DescribeIdentityPoolRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeIdentityPoolRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeIdentityPoolResponse)
    Q_DISABLE_COPY(DescribeIdentityPoolResponse)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
