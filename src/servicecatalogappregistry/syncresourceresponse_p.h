// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SYNCRESOURCERESPONSE_P_H
#define QTAWS_SYNCRESOURCERESPONSE_P_H

#include "servicecatalogappregistryresponse_p.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class SyncResourceResponse;

class SyncResourceResponsePrivate : public ServiceCatalogAppRegistryResponsePrivate {

public:

    explicit SyncResourceResponsePrivate(SyncResourceResponse * const q);

    void parseSyncResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SyncResourceResponse)
    Q_DISABLE_COPY(SyncResourceResponsePrivate)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
