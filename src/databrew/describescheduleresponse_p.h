// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCHEDULERESPONSE_P_H
#define QTAWS_DESCRIBESCHEDULERESPONSE_P_H

#include "databrewresponse_p.h"

namespace QtAws {
namespace DataBrew {

class DescribeScheduleResponse;

class DescribeScheduleResponsePrivate : public DataBrewResponsePrivate {

public:

    explicit DescribeScheduleResponsePrivate(DescribeScheduleResponse * const q);

    void parseDescribeScheduleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeScheduleResponse)
    Q_DISABLE_COPY(DescribeScheduleResponsePrivate)

};

} // namespace DataBrew
} // namespace QtAws

#endif
