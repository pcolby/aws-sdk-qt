// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESUBSCRIPTIONDEFINITIONVERSIONRESPONSE_P_H
#define QTAWS_CREATESUBSCRIPTIONDEFINITIONVERSIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class CreateSubscriptionDefinitionVersionResponse;

class CreateSubscriptionDefinitionVersionResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit CreateSubscriptionDefinitionVersionResponsePrivate(CreateSubscriptionDefinitionVersionResponse * const q);

    void parseCreateSubscriptionDefinitionVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSubscriptionDefinitionVersionResponse)
    Q_DISABLE_COPY(CreateSubscriptionDefinitionVersionResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
