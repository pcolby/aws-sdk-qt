// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSUBSCRIPTIONDEFINITIONRESPONSE_P_H
#define QTAWS_GETSUBSCRIPTIONDEFINITIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class GetSubscriptionDefinitionResponse;

class GetSubscriptionDefinitionResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit GetSubscriptionDefinitionResponsePrivate(GetSubscriptionDefinitionResponse * const q);

    void parseGetSubscriptionDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSubscriptionDefinitionResponse)
    Q_DISABLE_COPY(GetSubscriptionDefinitionResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
