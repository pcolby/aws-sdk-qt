// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUBSCRIPTIONSBYTOPICRESPONSE_P_H
#define QTAWS_LISTSUBSCRIPTIONSBYTOPICRESPONSE_P_H

#include "snsresponse_p.h"

namespace QtAws {
namespace Sns {

class ListSubscriptionsByTopicResponse;

class ListSubscriptionsByTopicResponsePrivate : public SnsResponsePrivate {

public:

    explicit ListSubscriptionsByTopicResponsePrivate(ListSubscriptionsByTopicResponse * const q);

    void parseListSubscriptionsByTopicResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSubscriptionsByTopicResponse)
    Q_DISABLE_COPY(ListSubscriptionsByTopicResponsePrivate)

};

} // namespace Sns
} // namespace QtAws

#endif
