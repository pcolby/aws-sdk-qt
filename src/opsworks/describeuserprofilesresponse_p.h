// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERPROFILESRESPONSE_P_H
#define QTAWS_DESCRIBEUSERPROFILESRESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class DescribeUserProfilesResponse;

class DescribeUserProfilesResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit DescribeUserProfilesResponsePrivate(DescribeUserProfilesResponse * const q);

    void parseDescribeUserProfilesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeUserProfilesResponse)
    Q_DISABLE_COPY(DescribeUserProfilesResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
