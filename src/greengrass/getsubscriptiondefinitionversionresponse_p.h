// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSUBSCRIPTIONDEFINITIONVERSIONRESPONSE_P_H
#define QTAWS_GETSUBSCRIPTIONDEFINITIONVERSIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class GetSubscriptionDefinitionVersionResponse;

class GetSubscriptionDefinitionVersionResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit GetSubscriptionDefinitionVersionResponsePrivate(GetSubscriptionDefinitionVersionResponse * const q);

    void parseGetSubscriptionDefinitionVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSubscriptionDefinitionVersionResponse)
    Q_DISABLE_COPY(GetSubscriptionDefinitionVersionResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
