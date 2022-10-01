// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPCSRESPONSE_P_H
#define QTAWS_DESCRIBEVPCSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpcsResponse;

class DescribeVpcsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeVpcsResponsePrivate(DescribeVpcsResponse * const q);

    void parseDescribeVpcsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeVpcsResponse)
    Q_DISABLE_COPY(DescribeVpcsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
