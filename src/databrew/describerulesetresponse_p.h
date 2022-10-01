// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERULESETRESPONSE_P_H
#define QTAWS_DESCRIBERULESETRESPONSE_P_H

#include "databrewresponse_p.h"

namespace QtAws {
namespace DataBrew {

class DescribeRulesetResponse;

class DescribeRulesetResponsePrivate : public DataBrewResponsePrivate {

public:

    explicit DescribeRulesetResponsePrivate(DescribeRulesetResponse * const q);

    void parseDescribeRulesetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeRulesetResponse)
    Q_DISABLE_COPY(DescribeRulesetResponsePrivate)

};

} // namespace DataBrew
} // namespace QtAws

#endif
