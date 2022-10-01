// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESERVICEACTIONRESPONSE_P_H
#define QTAWS_CREATESERVICEACTIONRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class CreateServiceActionResponse;

class CreateServiceActionResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit CreateServiceActionResponsePrivate(CreateServiceActionResponse * const q);

    void parseCreateServiceActionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateServiceActionResponse)
    Q_DISABLE_COPY(CreateServiceActionResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
