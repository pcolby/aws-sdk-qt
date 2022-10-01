// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTCATALOGTOGLUERESPONSE_P_H
#define QTAWS_IMPORTCATALOGTOGLUERESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class ImportCatalogToGlueResponse;

class ImportCatalogToGlueResponsePrivate : public GlueResponsePrivate {

public:

    explicit ImportCatalogToGlueResponsePrivate(ImportCatalogToGlueResponse * const q);

    void parseImportCatalogToGlueResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ImportCatalogToGlueResponse)
    Q_DISABLE_COPY(ImportCatalogToGlueResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
