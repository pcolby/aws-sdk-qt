// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTENTSUMMARYRESPONSE_P_H
#define QTAWS_GETCONTENTSUMMARYRESPONSE_P_H

#include "wisdomresponse_p.h"

namespace QtAws {
namespace Wisdom {

class GetContentSummaryResponse;

class GetContentSummaryResponsePrivate : public WisdomResponsePrivate {

public:

    explicit GetContentSummaryResponsePrivate(GetContentSummaryResponse * const q);

    void parseGetContentSummaryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetContentSummaryResponse)
    Q_DISABLE_COPY(GetContentSummaryResponsePrivate)

};

} // namespace Wisdom
} // namespace QtAws

#endif
