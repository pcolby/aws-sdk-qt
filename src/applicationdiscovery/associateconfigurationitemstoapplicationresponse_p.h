// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATECONFIGURATIONITEMSTOAPPLICATIONRESPONSE_P_H
#define QTAWS_ASSOCIATECONFIGURATIONITEMSTOAPPLICATIONRESPONSE_P_H

#include "applicationdiscoveryresponse_p.h"

namespace QtAws {
namespace ApplicationDiscovery {

class AssociateConfigurationItemsToApplicationResponse;

class AssociateConfigurationItemsToApplicationResponsePrivate : public ApplicationDiscoveryResponsePrivate {

public:

    explicit AssociateConfigurationItemsToApplicationResponsePrivate(AssociateConfigurationItemsToApplicationResponse * const q);

    void parseAssociateConfigurationItemsToApplicationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateConfigurationItemsToApplicationResponse)
    Q_DISABLE_COPY(AssociateConfigurationItemsToApplicationResponsePrivate)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
