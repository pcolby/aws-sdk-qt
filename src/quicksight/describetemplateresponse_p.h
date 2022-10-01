// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETEMPLATERESPONSE_P_H
#define QTAWS_DESCRIBETEMPLATERESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class DescribeTemplateResponse;

class DescribeTemplateResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit DescribeTemplateResponsePrivate(DescribeTemplateResponse * const q);

    void parseDescribeTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTemplateResponse)
    Q_DISABLE_COPY(DescribeTemplateResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
