// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESEVERITYLEVELSRESPONSE_P_H
#define QTAWS_DESCRIBESEVERITYLEVELSRESPONSE_P_H

#include "supportresponse_p.h"

namespace QtAws {
namespace Support {

class DescribeSeverityLevelsResponse;

class DescribeSeverityLevelsResponsePrivate : public SupportResponsePrivate {

public:

    explicit DescribeSeverityLevelsResponsePrivate(DescribeSeverityLevelsResponse * const q);

    void parseDescribeSeverityLevelsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSeverityLevelsResponse)
    Q_DISABLE_COPY(DescribeSeverityLevelsResponsePrivate)

};

} // namespace Support
} // namespace QtAws

#endif
