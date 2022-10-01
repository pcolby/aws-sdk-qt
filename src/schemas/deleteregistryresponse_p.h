// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREGISTRYRESPONSE_P_H
#define QTAWS_DELETEREGISTRYRESPONSE_P_H

#include "schemasresponse_p.h"

namespace QtAws {
namespace Schemas {

class DeleteRegistryResponse;

class DeleteRegistryResponsePrivate : public SchemasResponsePrivate {

public:

    explicit DeleteRegistryResponsePrivate(DeleteRegistryResponse * const q);

    void parseDeleteRegistryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRegistryResponse)
    Q_DISABLE_COPY(DeleteRegistryResponsePrivate)

};

} // namespace Schemas
} // namespace QtAws

#endif
