// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVOLUMESTATUSRESPONSE_P_H
#define QTAWS_DESCRIBEVOLUMESTATUSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeVolumeStatusResponse;

class DescribeVolumeStatusResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeVolumeStatusResponsePrivate(DescribeVolumeStatusResponse * const q);

    void parseDescribeVolumeStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeVolumeStatusResponse)
    Q_DISABLE_COPY(DescribeVolumeStatusResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
