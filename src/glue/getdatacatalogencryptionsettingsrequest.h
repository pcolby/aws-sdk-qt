// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATACATALOGENCRYPTIONSETTINGSREQUEST_H
#define QTAWS_GETDATACATALOGENCRYPTIONSETTINGSREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class GetDataCatalogEncryptionSettingsRequestPrivate;

class QTAWSGLUE_EXPORT GetDataCatalogEncryptionSettingsRequest : public GlueRequest {

public:
    GetDataCatalogEncryptionSettingsRequest(const GetDataCatalogEncryptionSettingsRequest &other);
    GetDataCatalogEncryptionSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDataCatalogEncryptionSettingsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
