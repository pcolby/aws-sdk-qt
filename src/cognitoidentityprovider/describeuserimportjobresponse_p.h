// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERIMPORTJOBRESPONSE_P_H
#define QTAWS_DESCRIBEUSERIMPORTJOBRESPONSE_P_H

#include "cognitoidentityproviderresponse_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DescribeUserImportJobResponse;

class DescribeUserImportJobResponsePrivate : public CognitoIdentityProviderResponsePrivate {

public:

    explicit DescribeUserImportJobResponsePrivate(DescribeUserImportJobResponse * const q);

    void parseDescribeUserImportJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeUserImportJobResponse)
    Q_DISABLE_COPY(DescribeUserImportJobResponsePrivate)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
