// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDATACATALOGENCRYPTIONSETTINGSRESPONSE_H
#define QTAWS_PUTDATACATALOGENCRYPTIONSETTINGSRESPONSE_H

#include "glueresponse.h"
#include "putdatacatalogencryptionsettingsrequest.h"

namespace QtAws {
namespace Glue {

class PutDataCatalogEncryptionSettingsResponsePrivate;

class QTAWSGLUE_EXPORT PutDataCatalogEncryptionSettingsResponse : public GlueResponse {
    Q_OBJECT

public:
    PutDataCatalogEncryptionSettingsResponse(const PutDataCatalogEncryptionSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutDataCatalogEncryptionSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutDataCatalogEncryptionSettingsResponse)
    Q_DISABLE_COPY(PutDataCatalogEncryptionSettingsResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
