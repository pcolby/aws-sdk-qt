// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NOTIFYRECOMMENDATIONSRECEIVEDRESPONSE_P_H
#define QTAWS_NOTIFYRECOMMENDATIONSRECEIVEDRESPONSE_P_H

#include "wisdomresponse_p.h"

namespace QtAws {
namespace Wisdom {

class NotifyRecommendationsReceivedResponse;

class NotifyRecommendationsReceivedResponsePrivate : public WisdomResponsePrivate {

public:

    explicit NotifyRecommendationsReceivedResponsePrivate(NotifyRecommendationsReceivedResponse * const q);

    void parseNotifyRecommendationsReceivedResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(NotifyRecommendationsReceivedResponse)
    Q_DISABLE_COPY(NotifyRecommendationsReceivedResponsePrivate)

};

} // namespace Wisdom
} // namespace QtAws

#endif
