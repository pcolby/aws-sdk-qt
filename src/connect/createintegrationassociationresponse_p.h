// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINTEGRATIONASSOCIATIONRESPONSE_P_H
#define QTAWS_CREATEINTEGRATIONASSOCIATIONRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class CreateIntegrationAssociationResponse;

class CreateIntegrationAssociationResponsePrivate : public ConnectResponsePrivate {

public:

    explicit CreateIntegrationAssociationResponsePrivate(CreateIntegrationAssociationResponse * const q);

    void parseCreateIntegrationAssociationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateIntegrationAssociationResponse)
    Q_DISABLE_COPY(CreateIntegrationAssociationResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
