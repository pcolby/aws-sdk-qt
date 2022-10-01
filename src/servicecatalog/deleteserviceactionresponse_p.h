// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVICEACTIONRESPONSE_P_H
#define QTAWS_DELETESERVICEACTIONRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class DeleteServiceActionResponse;

class DeleteServiceActionResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit DeleteServiceActionResponsePrivate(DeleteServiceActionResponse * const q);

    void parseDeleteServiceActionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteServiceActionResponse)
    Q_DISABLE_COPY(DeleteServiceActionResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
