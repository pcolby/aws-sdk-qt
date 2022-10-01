// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDISCOVERERSRESPONSE_P_H
#define QTAWS_LISTDISCOVERERSRESPONSE_P_H

#include "schemasresponse_p.h"

namespace QtAws {
namespace Schemas {

class ListDiscoverersResponse;

class ListDiscoverersResponsePrivate : public SchemasResponsePrivate {

public:

    explicit ListDiscoverersResponsePrivate(ListDiscoverersResponse * const q);

    void parseListDiscoverersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDiscoverersResponse)
    Q_DISABLE_COPY(ListDiscoverersResponsePrivate)

};

} // namespace Schemas
} // namespace QtAws

#endif
