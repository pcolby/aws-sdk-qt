// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGOPTIONSRESPONSE_P_H
#define QTAWS_LISTTAGOPTIONSRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class ListTagOptionsResponse;

class ListTagOptionsResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit ListTagOptionsResponsePrivate(ListTagOptionsResponse * const q);

    void parseListTagOptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTagOptionsResponse)
    Q_DISABLE_COPY(ListTagOptionsResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
