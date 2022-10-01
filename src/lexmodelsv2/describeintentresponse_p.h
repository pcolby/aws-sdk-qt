// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINTENTRESPONSE_P_H
#define QTAWS_DESCRIBEINTENTRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class DescribeIntentResponse;

class DescribeIntentResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit DescribeIntentResponsePrivate(DescribeIntentResponse * const q);

    void parseDescribeIntentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeIntentResponse)
    Q_DISABLE_COPY(DescribeIntentResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
