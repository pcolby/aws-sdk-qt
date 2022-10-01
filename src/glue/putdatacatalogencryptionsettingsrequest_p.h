// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDATACATALOGENCRYPTIONSETTINGSREQUEST_P_H
#define QTAWS_PUTDATACATALOGENCRYPTIONSETTINGSREQUEST_P_H

#include "gluerequest_p.h"
#include "putdatacatalogencryptionsettingsrequest.h"

namespace QtAws {
namespace Glue {

class PutDataCatalogEncryptionSettingsRequest;

class PutDataCatalogEncryptionSettingsRequestPrivate : public GlueRequestPrivate {

public:
    PutDataCatalogEncryptionSettingsRequestPrivate(const GlueRequest::Action action,
                                   PutDataCatalogEncryptionSettingsRequest * const q);
    PutDataCatalogEncryptionSettingsRequestPrivate(const PutDataCatalogEncryptionSettingsRequestPrivate &other,
                                   PutDataCatalogEncryptionSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutDataCatalogEncryptionSettingsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
