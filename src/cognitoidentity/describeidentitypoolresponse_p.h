// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIDENTITYPOOLRESPONSE_P_H
#define QTAWS_DESCRIBEIDENTITYPOOLRESPONSE_P_H

#include "cognitoidentityresponse_p.h"

namespace QtAws {
namespace CognitoIdentity {

class DescribeIdentityPoolResponse;

class DescribeIdentityPoolResponsePrivate : public CognitoIdentityResponsePrivate {

public:

    explicit DescribeIdentityPoolResponsePrivate(DescribeIdentityPoolResponse * const q);

    void parseDescribeIdentityPoolResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeIdentityPoolResponse)
    Q_DISABLE_COPY(DescribeIdentityPoolResponsePrivate)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
