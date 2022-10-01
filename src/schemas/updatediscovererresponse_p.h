// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDISCOVERERRESPONSE_P_H
#define QTAWS_UPDATEDISCOVERERRESPONSE_P_H

#include "schemasresponse_p.h"

namespace QtAws {
namespace Schemas {

class UpdateDiscovererResponse;

class UpdateDiscovererResponsePrivate : public SchemasResponsePrivate {

public:

    explicit UpdateDiscovererResponsePrivate(UpdateDiscovererResponse * const q);

    void parseUpdateDiscovererResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDiscovererResponse)
    Q_DISABLE_COPY(UpdateDiscovererResponsePrivate)

};

} // namespace Schemas
} // namespace QtAws

#endif
