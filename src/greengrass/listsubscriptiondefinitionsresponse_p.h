// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUBSCRIPTIONDEFINITIONSRESPONSE_P_H
#define QTAWS_LISTSUBSCRIPTIONDEFINITIONSRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class ListSubscriptionDefinitionsResponse;

class ListSubscriptionDefinitionsResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit ListSubscriptionDefinitionsResponsePrivate(ListSubscriptionDefinitionsResponse * const q);

    void parseListSubscriptionDefinitionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSubscriptionDefinitionsResponse)
    Q_DISABLE_COPY(ListSubscriptionDefinitionsResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
