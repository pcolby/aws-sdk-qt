// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESUBSCRIPTIONDEFINITIONRESPONSE_P_H
#define QTAWS_CREATESUBSCRIPTIONDEFINITIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class CreateSubscriptionDefinitionResponse;

class CreateSubscriptionDefinitionResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit CreateSubscriptionDefinitionResponsePrivate(CreateSubscriptionDefinitionResponse * const q);

    void parseCreateSubscriptionDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSubscriptionDefinitionResponse)
    Q_DISABLE_COPY(CreateSubscriptionDefinitionResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
