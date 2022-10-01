// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVOLUMESMODIFICATIONSRESPONSE_P_H
#define QTAWS_DESCRIBEVOLUMESMODIFICATIONSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeVolumesModificationsResponse;

class DescribeVolumesModificationsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeVolumesModificationsResponsePrivate(DescribeVolumesModificationsResponse * const q);

    void parseDescribeVolumesModificationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeVolumesModificationsResponse)
    Q_DISABLE_COPY(DescribeVolumesModificationsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
