// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHSCHEMASRESPONSE_P_H
#define QTAWS_SEARCHSCHEMASRESPONSE_P_H

#include "schemasresponse_p.h"

namespace QtAws {
namespace Schemas {

class SearchSchemasResponse;

class SearchSchemasResponsePrivate : public SchemasResponsePrivate {

public:

    explicit SearchSchemasResponsePrivate(SearchSchemasResponse * const q);

    void parseSearchSchemasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchSchemasResponse)
    Q_DISABLE_COPY(SearchSchemasResponsePrivate)

};

} // namespace Schemas
} // namespace QtAws

#endif
