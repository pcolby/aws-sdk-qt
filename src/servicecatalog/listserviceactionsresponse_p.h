// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVICEACTIONSRESPONSE_P_H
#define QTAWS_LISTSERVICEACTIONSRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class ListServiceActionsResponse;

class ListServiceActionsResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit ListServiceActionsResponsePrivate(ListServiceActionsResponse * const q);

    void parseListServiceActionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListServiceActionsResponse)
    Q_DISABLE_COPY(ListServiceActionsResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
