// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATACATALOGENCRYPTIONSETTINGSRESPONSE_P_H
#define QTAWS_GETDATACATALOGENCRYPTIONSETTINGSRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetDataCatalogEncryptionSettingsResponse;

class GetDataCatalogEncryptionSettingsResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetDataCatalogEncryptionSettingsResponsePrivate(GetDataCatalogEncryptionSettingsResponse * const q);

    void parseGetDataCatalogEncryptionSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDataCatalogEncryptionSettingsResponse)
    Q_DISABLE_COPY(GetDataCatalogEncryptionSettingsResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
