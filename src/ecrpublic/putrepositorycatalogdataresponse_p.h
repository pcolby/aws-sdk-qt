// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTREPOSITORYCATALOGDATARESPONSE_P_H
#define QTAWS_PUTREPOSITORYCATALOGDATARESPONSE_P_H

#include "ecrpublicresponse_p.h"

namespace QtAws {
namespace EcrPublic {

class PutRepositoryCatalogDataResponse;

class PutRepositoryCatalogDataResponsePrivate : public EcrPublicResponsePrivate {

public:

    explicit PutRepositoryCatalogDataResponsePrivate(PutRepositoryCatalogDataResponse * const q);

    void parsePutRepositoryCatalogDataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutRepositoryCatalogDataResponse)
    Q_DISABLE_COPY(PutRepositoryCatalogDataResponsePrivate)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
