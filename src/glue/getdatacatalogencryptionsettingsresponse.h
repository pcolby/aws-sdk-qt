// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATACATALOGENCRYPTIONSETTINGSRESPONSE_H
#define QTAWS_GETDATACATALOGENCRYPTIONSETTINGSRESPONSE_H

#include "glueresponse.h"
#include "getdatacatalogencryptionsettingsrequest.h"

namespace QtAws {
namespace Glue {

class GetDataCatalogEncryptionSettingsResponsePrivate;

class QTAWSGLUE_EXPORT GetDataCatalogEncryptionSettingsResponse : public GlueResponse {
    Q_OBJECT

public:
    GetDataCatalogEncryptionSettingsResponse(const GetDataCatalogEncryptionSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDataCatalogEncryptionSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDataCatalogEncryptionSettingsResponse)
    Q_DISABLE_COPY(GetDataCatalogEncryptionSettingsResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
