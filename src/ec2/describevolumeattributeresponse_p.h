// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVOLUMEATTRIBUTERESPONSE_P_H
#define QTAWS_DESCRIBEVOLUMEATTRIBUTERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeVolumeAttributeResponse;

class DescribeVolumeAttributeResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeVolumeAttributeResponsePrivate(DescribeVolumeAttributeResponse * const q);

    void parseDescribeVolumeAttributeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeVolumeAttributeResponse)
    Q_DISABLE_COPY(DescribeVolumeAttributeResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
