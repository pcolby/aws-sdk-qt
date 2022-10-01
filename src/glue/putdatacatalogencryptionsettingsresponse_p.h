// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDATACATALOGENCRYPTIONSETTINGSRESPONSE_P_H
#define QTAWS_PUTDATACATALOGENCRYPTIONSETTINGSRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class PutDataCatalogEncryptionSettingsResponse;

class PutDataCatalogEncryptionSettingsResponsePrivate : public GlueResponsePrivate {

public:

    explicit PutDataCatalogEncryptionSettingsResponsePrivate(PutDataCatalogEncryptionSettingsResponse * const q);

    void parsePutDataCatalogEncryptionSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutDataCatalogEncryptionSettingsResponse)
    Q_DISABLE_COPY(PutDataCatalogEncryptionSettingsResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
