// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMAGEATTRIBUTERESPONSE_P_H
#define QTAWS_DESCRIBEIMAGEATTRIBUTERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeImageAttributeResponse;

class DescribeImageAttributeResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeImageAttributeResponsePrivate(DescribeImageAttributeResponse * const q);

    void parseDescribeImageAttributeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeImageAttributeResponse)
    Q_DISABLE_COPY(DescribeImageAttributeResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
