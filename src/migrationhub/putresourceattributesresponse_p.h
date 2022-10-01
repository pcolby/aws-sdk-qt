// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRESOURCEATTRIBUTESRESPONSE_P_H
#define QTAWS_PUTRESOURCEATTRIBUTESRESPONSE_P_H

#include "migrationhubresponse_p.h"

namespace QtAws {
namespace MigrationHub {

class PutResourceAttributesResponse;

class PutResourceAttributesResponsePrivate : public MigrationHubResponsePrivate {

public:

    explicit PutResourceAttributesResponsePrivate(PutResourceAttributesResponse * const q);

    void parsePutResourceAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutResourceAttributesResponse)
    Q_DISABLE_COPY(PutResourceAttributesResponsePrivate)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
