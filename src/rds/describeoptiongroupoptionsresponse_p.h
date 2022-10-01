// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOPTIONGROUPOPTIONSRESPONSE_P_H
#define QTAWS_DESCRIBEOPTIONGROUPOPTIONSRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class DescribeOptionGroupOptionsResponse;

class DescribeOptionGroupOptionsResponsePrivate : public RdsResponsePrivate {

public:

    explicit DescribeOptionGroupOptionsResponsePrivate(DescribeOptionGroupOptionsResponse * const q);

    void parseDescribeOptionGroupOptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeOptionGroupOptionsResponse)
    Q_DISABLE_COPY(DescribeOptionGroupOptionsResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
