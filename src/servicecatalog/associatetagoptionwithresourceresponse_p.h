// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETAGOPTIONWITHRESOURCERESPONSE_P_H
#define QTAWS_ASSOCIATETAGOPTIONWITHRESOURCERESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class AssociateTagOptionWithResourceResponse;

class AssociateTagOptionWithResourceResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit AssociateTagOptionWithResourceResponsePrivate(AssociateTagOptionWithResourceResponse * const q);

    void parseAssociateTagOptionWithResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateTagOptionWithResourceResponse)
    Q_DISABLE_COPY(AssociateTagOptionWithResourceResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
