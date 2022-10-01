// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINTEGRATIONASSOCIATIONRESPONSE_P_H
#define QTAWS_DELETEINTEGRATIONASSOCIATIONRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class DeleteIntegrationAssociationResponse;

class DeleteIntegrationAssociationResponsePrivate : public ConnectResponsePrivate {

public:

    explicit DeleteIntegrationAssociationResponsePrivate(DeleteIntegrationAssociationResponse * const q);

    void parseDeleteIntegrationAssociationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteIntegrationAssociationResponse)
    Q_DISABLE_COPY(DeleteIntegrationAssociationResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
