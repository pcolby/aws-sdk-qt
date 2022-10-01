// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESUBSCRIPTIONDEFINITIONRESPONSE_P_H
#define QTAWS_UPDATESUBSCRIPTIONDEFINITIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class UpdateSubscriptionDefinitionResponse;

class UpdateSubscriptionDefinitionResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit UpdateSubscriptionDefinitionResponsePrivate(UpdateSubscriptionDefinitionResponse * const q);

    void parseUpdateSubscriptionDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSubscriptionDefinitionResponse)
    Q_DISABLE_COPY(UpdateSubscriptionDefinitionResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
