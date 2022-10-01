// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREGISTRYCATALOGDATARESPONSE_P_H
#define QTAWS_GETREGISTRYCATALOGDATARESPONSE_P_H

#include "ecrpublicresponse_p.h"

namespace QtAws {
namespace EcrPublic {

class GetRegistryCatalogDataResponse;

class GetRegistryCatalogDataResponsePrivate : public EcrPublicResponsePrivate {

public:

    explicit GetRegistryCatalogDataResponsePrivate(GetRegistryCatalogDataResponse * const q);

    void parseGetRegistryCatalogDataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRegistryCatalogDataResponse)
    Q_DISABLE_COPY(GetRegistryCatalogDataResponsePrivate)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
