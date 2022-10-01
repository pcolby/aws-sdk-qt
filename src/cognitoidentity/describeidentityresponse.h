// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIDENTITYRESPONSE_H
#define QTAWS_DESCRIBEIDENTITYRESPONSE_H

#include "cognitoidentityresponse.h"
#include "describeidentityrequest.h"

namespace QtAws {
namespace CognitoIdentity {

class DescribeIdentityResponsePrivate;

class QTAWSCOGNITOIDENTITY_EXPORT DescribeIdentityResponse : public CognitoIdentityResponse {
    Q_OBJECT

public:
    DescribeIdentityResponse(const DescribeIdentityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeIdentityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeIdentityResponse)
    Q_DISABLE_COPY(DescribeIdentityResponse)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
