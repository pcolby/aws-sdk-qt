// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTREGISTRYCATALOGDATARESPONSE_P_H
#define QTAWS_PUTREGISTRYCATALOGDATARESPONSE_P_H

#include "ecrpublicresponse_p.h"

namespace QtAws {
namespace EcrPublic {

class PutRegistryCatalogDataResponse;

class PutRegistryCatalogDataResponsePrivate : public EcrPublicResponsePrivate {

public:

    explicit PutRegistryCatalogDataResponsePrivate(PutRegistryCatalogDataResponse * const q);

    void parsePutRegistryCatalogDataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutRegistryCatalogDataResponse)
    Q_DISABLE_COPY(PutRegistryCatalogDataResponsePrivate)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
