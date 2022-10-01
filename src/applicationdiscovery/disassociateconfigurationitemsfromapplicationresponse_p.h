// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATECONFIGURATIONITEMSFROMAPPLICATIONRESPONSE_P_H
#define QTAWS_DISASSOCIATECONFIGURATIONITEMSFROMAPPLICATIONRESPONSE_P_H

#include "applicationdiscoveryresponse_p.h"

namespace QtAws {
namespace ApplicationDiscovery {

class DisassociateConfigurationItemsFromApplicationResponse;

class DisassociateConfigurationItemsFromApplicationResponsePrivate : public ApplicationDiscoveryResponsePrivate {

public:

    explicit DisassociateConfigurationItemsFromApplicationResponsePrivate(DisassociateConfigurationItemsFromApplicationResponse * const q);

    void parseDisassociateConfigurationItemsFromApplicationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateConfigurationItemsFromApplicationResponse)
    Q_DISABLE_COPY(DisassociateConfigurationItemsFromApplicationResponsePrivate)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
