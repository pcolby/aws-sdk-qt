// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREGISTRIESRESPONSE_P_H
#define QTAWS_LISTREGISTRIESRESPONSE_P_H

#include "schemasresponse_p.h"

namespace QtAws {
namespace Schemas {

class ListRegistriesResponse;

class ListRegistriesResponsePrivate : public SchemasResponsePrivate {

public:

    explicit ListRegistriesResponsePrivate(ListRegistriesResponse * const q);

    void parseListRegistriesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRegistriesResponse)
    Q_DISABLE_COPY(ListRegistriesResponsePrivate)

};

} // namespace Schemas
} // namespace QtAws

#endif
