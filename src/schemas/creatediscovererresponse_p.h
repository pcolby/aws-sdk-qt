// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDISCOVERERRESPONSE_P_H
#define QTAWS_CREATEDISCOVERERRESPONSE_P_H

#include "schemasresponse_p.h"

namespace QtAws {
namespace Schemas {

class CreateDiscovererResponse;

class CreateDiscovererResponsePrivate : public SchemasResponsePrivate {

public:

    explicit CreateDiscovererResponsePrivate(CreateDiscovererResponse * const q);

    void parseCreateDiscovererResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDiscovererResponse)
    Q_DISABLE_COPY(CreateDiscovererResponsePrivate)

};

} // namespace Schemas
} // namespace QtAws

#endif
