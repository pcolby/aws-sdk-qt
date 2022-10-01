// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICEACTIONRESPONSE_P_H
#define QTAWS_UPDATESERVICEACTIONRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class UpdateServiceActionResponse;

class UpdateServiceActionResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit UpdateServiceActionResponsePrivate(UpdateServiceActionResponse * const q);

    void parseUpdateServiceActionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateServiceActionResponse)
    Q_DISABLE_COPY(UpdateServiceActionResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
