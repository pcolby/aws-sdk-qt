// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONRESPONSE_P_H
#define QTAWS_DELETEAPPLICATIONRESPONSE_P_H

#include "servicecatalogappregistryresponse_p.h"

namespace QtAws {
namespace ServiceCatalogAppRegistry {

class DeleteApplicationResponse;

class DeleteApplicationResponsePrivate : public ServiceCatalogAppRegistryResponsePrivate {

public:

    explicit DeleteApplicationResponsePrivate(DeleteApplicationResponse * const q);

    void parseDeleteApplicationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteApplicationResponse)
    Q_DISABLE_COPY(DeleteApplicationResponsePrivate)

};

} // namespace ServiceCatalogAppRegistry
} // namespace QtAws

#endif
