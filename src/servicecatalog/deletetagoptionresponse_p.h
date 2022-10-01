// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETAGOPTIONRESPONSE_P_H
#define QTAWS_DELETETAGOPTIONRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class DeleteTagOptionResponse;

class DeleteTagOptionResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit DeleteTagOptionResponsePrivate(DeleteTagOptionResponse * const q);

    void parseDeleteTagOptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTagOptionResponse)
    Q_DISABLE_COPY(DeleteTagOptionResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
