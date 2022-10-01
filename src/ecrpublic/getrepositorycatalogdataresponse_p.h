// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPOSITORYCATALOGDATARESPONSE_P_H
#define QTAWS_GETREPOSITORYCATALOGDATARESPONSE_P_H

#include "ecrpublicresponse_p.h"

namespace QtAws {
namespace EcrPublic {

class GetRepositoryCatalogDataResponse;

class GetRepositoryCatalogDataResponsePrivate : public EcrPublicResponsePrivate {

public:

    explicit GetRepositoryCatalogDataResponsePrivate(GetRepositoryCatalogDataResponse * const q);

    void parseGetRepositoryCatalogDataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRepositoryCatalogDataResponse)
    Q_DISABLE_COPY(GetRepositoryCatalogDataResponsePrivate)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
