// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINVENTORYSCHEMARESPONSE_P_H
#define QTAWS_GETINVENTORYSCHEMARESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class GetInventorySchemaResponse;

class GetInventorySchemaResponsePrivate : public SsmResponsePrivate {

public:

    explicit GetInventorySchemaResponsePrivate(GetInventorySchemaResponse * const q);

    void parseGetInventorySchemaResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetInventorySchemaResponse)
    Q_DISABLE_COPY(GetInventorySchemaResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
