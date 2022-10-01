// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPLICATIONRESPONSE_P_H
#define QTAWS_UPDATEAPPLICATIONRESPONSE_P_H

#include "servicecatalogappregistryresponse_p.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class UpdateApplicationResponse;

class UpdateApplicationResponsePrivate : public ServiceCatalogAppRegistryResponsePrivate {

public:

    explicit UpdateApplicationResponsePrivate(UpdateApplicationResponse * const q);

    void parseUpdateApplicationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateApplicationResponse)
    Q_DISABLE_COPY(UpdateApplicationResponsePrivate)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
