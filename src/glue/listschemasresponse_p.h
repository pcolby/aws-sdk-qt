// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSCHEMASRESPONSE_P_H
#define QTAWS_LISTSCHEMASRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class ListSchemasResponse;

class ListSchemasResponsePrivate : public GlueResponsePrivate {

public:

    explicit ListSchemasResponsePrivate(ListSchemasResponse * const q);

    void parseListSchemasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSchemasResponse)
    Q_DISABLE_COPY(ListSchemasResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
