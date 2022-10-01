// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATACATALOGENCRYPTIONSETTINGSREQUEST_P_H
#define QTAWS_GETDATACATALOGENCRYPTIONSETTINGSREQUEST_P_H

#include "gluerequest_p.h"
#include "getdatacatalogencryptionsettingsrequest.h"

namespace QtAws {
namespace Glue {

class GetDataCatalogEncryptionSettingsRequest;

class GetDataCatalogEncryptionSettingsRequestPrivate : public GlueRequestPrivate {

public:
    GetDataCatalogEncryptionSettingsRequestPrivate(const GlueRequest::Action action,
                                   GetDataCatalogEncryptionSettingsRequest * const q);
    GetDataCatalogEncryptionSettingsRequestPrivate(const GetDataCatalogEncryptionSettingsRequestPrivate &other,
                                   GetDataCatalogEncryptionSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDataCatalogEncryptionSettingsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
