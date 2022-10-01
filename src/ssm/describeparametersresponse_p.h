// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPARAMETERSRESPONSE_P_H
#define QTAWS_DESCRIBEPARAMETERSRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class DescribeParametersResponse;

class DescribeParametersResponsePrivate : public SsmResponsePrivate {

public:

    explicit DescribeParametersResponsePrivate(DescribeParametersResponse * const q);

    void parseDescribeParametersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeParametersResponse)
    Q_DISABLE_COPY(DescribeParametersResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
