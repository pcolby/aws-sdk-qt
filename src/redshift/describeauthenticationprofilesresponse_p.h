// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUTHENTICATIONPROFILESRESPONSE_P_H
#define QTAWS_DESCRIBEAUTHENTICATIONPROFILESRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DescribeAuthenticationProfilesResponse;

class DescribeAuthenticationProfilesResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DescribeAuthenticationProfilesResponsePrivate(DescribeAuthenticationProfilesResponse * const q);

    void parseDescribeAuthenticationProfilesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAuthenticationProfilesResponse)
    Q_DISABLE_COPY(DescribeAuthenticationProfilesResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
