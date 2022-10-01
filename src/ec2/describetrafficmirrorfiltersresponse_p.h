// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRAFFICMIRRORFILTERSRESPONSE_P_H
#define QTAWS_DESCRIBETRAFFICMIRRORFILTERSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeTrafficMirrorFiltersResponse;

class DescribeTrafficMirrorFiltersResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeTrafficMirrorFiltersResponsePrivate(DescribeTrafficMirrorFiltersResponse * const q);

    void parseDescribeTrafficMirrorFiltersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTrafficMirrorFiltersResponse)
    Q_DISABLE_COPY(DescribeTrafficMirrorFiltersResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
