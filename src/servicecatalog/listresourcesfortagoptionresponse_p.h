// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCESFORTAGOPTIONRESPONSE_P_H
#define QTAWS_LISTRESOURCESFORTAGOPTIONRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class ListResourcesForTagOptionResponse;

class ListResourcesForTagOptionResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit ListResourcesForTagOptionResponsePrivate(ListResourcesForTagOptionResponse * const q);

    void parseListResourcesForTagOptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListResourcesForTagOptionResponse)
    Q_DISABLE_COPY(ListResourcesForTagOptionResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
