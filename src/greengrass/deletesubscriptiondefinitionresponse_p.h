// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESUBSCRIPTIONDEFINITIONRESPONSE_P_H
#define QTAWS_DELETESUBSCRIPTIONDEFINITIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class DeleteSubscriptionDefinitionResponse;

class DeleteSubscriptionDefinitionResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit DeleteSubscriptionDefinitionResponsePrivate(DeleteSubscriptionDefinitionResponse * const q);

    void parseDeleteSubscriptionDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSubscriptionDefinitionResponse)
    Q_DISABLE_COPY(DeleteSubscriptionDefinitionResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
