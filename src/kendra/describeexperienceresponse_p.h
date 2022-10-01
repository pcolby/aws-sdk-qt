// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXPERIENCERESPONSE_P_H
#define QTAWS_DESCRIBEEXPERIENCERESPONSE_P_H

#include "kendraresponse_p.h"

namespace QtAws {
namespace Kendra {

class DescribeExperienceResponse;

class DescribeExperienceResponsePrivate : public KendraResponsePrivate {

public:

    explicit DescribeExperienceResponsePrivate(DescribeExperienceResponse * const q);

    void parseDescribeExperienceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeExperienceResponse)
    Q_DISABLE_COPY(DescribeExperienceResponsePrivate)

};

} // namespace Kendra
} // namespace QtAws

#endif
