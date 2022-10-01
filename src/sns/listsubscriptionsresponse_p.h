// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUBSCRIPTIONSRESPONSE_P_H
#define QTAWS_LISTSUBSCRIPTIONSRESPONSE_P_H

#include "snsresponse_p.h"

namespace QtAws {
namespace Sns {

class ListSubscriptionsResponse;

class ListSubscriptionsResponsePrivate : public SnsResponsePrivate {

public:

    explicit ListSubscriptionsResponsePrivate(ListSubscriptionsResponse * const q);

    void parseListSubscriptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSubscriptionsResponse)
    Q_DISABLE_COPY(ListSubscriptionsResponsePrivate)

};

} // namespace Sns
} // namespace QtAws

#endif
