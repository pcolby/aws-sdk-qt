// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIDENTITYRESPONSE_P_H
#define QTAWS_DESCRIBEIDENTITYRESPONSE_P_H

#include "cognitoidentityresponse_p.h"

namespace QtAws {
namespace CognitoIdentity {

class DescribeIdentityResponse;

class DescribeIdentityResponsePrivate : public CognitoIdentityResponsePrivate {

public:

    explicit DescribeIdentityResponsePrivate(DescribeIdentityResponse * const q);

    void parseDescribeIdentityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeIdentityResponse)
    Q_DISABLE_COPY(DescribeIdentityResponsePrivate)

};

} // namespace CognitoIdentity
} // namespace QtAws

#endif
