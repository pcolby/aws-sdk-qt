// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDEFAULTPARAMETERSRESPONSE_P_H
#define QTAWS_DESCRIBEDEFAULTPARAMETERSRESPONSE_P_H

#include "daxresponse_p.h"

namespace QtAws {
namespace Dax {

class DescribeDefaultParametersResponse;

class DescribeDefaultParametersResponsePrivate : public DaxResponsePrivate {

public:

    explicit DescribeDefaultParametersResponsePrivate(DescribeDefaultParametersResponse * const q);

    void parseDescribeDefaultParametersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDefaultParametersResponse)
    Q_DISABLE_COPY(DescribeDefaultParametersResponsePrivate)

};

} // namespace Dax
} // namespace QtAws

#endif
