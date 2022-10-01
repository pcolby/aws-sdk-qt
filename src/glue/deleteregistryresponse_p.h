// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREGISTRYRESPONSE_P_H
#define QTAWS_DELETEREGISTRYRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class DeleteRegistryResponse;

class DeleteRegistryResponsePrivate : public GlueResponsePrivate {

public:

    explicit DeleteRegistryResponsePrivate(DeleteRegistryResponse * const q);

    void parseDeleteRegistryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRegistryResponse)
    Q_DISABLE_COPY(DeleteRegistryResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
