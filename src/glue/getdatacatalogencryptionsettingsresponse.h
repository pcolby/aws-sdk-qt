/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_GETDATACATALOGENCRYPTIONSETTINGSRESPONSE_H
#define QTAWS_GETDATACATALOGENCRYPTIONSETTINGSRESPONSE_H

#include "glueresponse.h"
#include "getdatacatalogencryptionsettingsrequest.h"

namespace QtAws {
namespace Glue {

class GetDataCatalogEncryptionSettingsResponsePrivate;

class QTAWS_EXPORT GetDataCatalogEncryptionSettingsResponse : public GlueResponse {
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
