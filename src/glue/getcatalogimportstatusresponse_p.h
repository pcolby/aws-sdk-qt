// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCATALOGIMPORTSTATUSRESPONSE_P_H
#define QTAWS_GETCATALOGIMPORTSTATUSRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetCatalogImportStatusResponse;

class GetCatalogImportStatusResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetCatalogImportStatusResponsePrivate(GetCatalogImportStatusResponse * const q);

    void parseGetCatalogImportStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCatalogImportStatusResponse)
    Q_DISABLE_COPY(GetCatalogImportStatusResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
