// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBPARAMETERSRESPONSE_P_H
#define QTAWS_DESCRIBEDBPARAMETERSRESPONSE_P_H

#include "neptuneresponse_p.h"

namespace QtAws {
namespace Neptune {

class DescribeDBParametersResponse;

class DescribeDBParametersResponsePrivate : public NeptuneResponsePrivate {

public:

    explicit DescribeDBParametersResponsePrivate(DescribeDBParametersResponse * const q);

    void parseDescribeDBParametersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDBParametersResponse)
    Q_DISABLE_COPY(DescribeDBParametersResponsePrivate)

};

} // namespace Neptune
} // namespace QtAws

#endif
