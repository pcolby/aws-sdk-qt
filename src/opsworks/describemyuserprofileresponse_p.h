// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMYUSERPROFILERESPONSE_P_H
#define QTAWS_DESCRIBEMYUSERPROFILERESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class DescribeMyUserProfileResponse;

class DescribeMyUserProfileResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit DescribeMyUserProfileResponsePrivate(DescribeMyUserProfileResponse * const q);

    void parseDescribeMyUserProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeMyUserProfileResponse)
    Q_DISABLE_COPY(DescribeMyUserProfileResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
