// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATACATALOGRESPONSE_P_H
#define QTAWS_GETDATACATALOGRESPONSE_P_H

#include "athenaresponse_p.h"

namespace QtAws {
namespace Athena {

class GetDataCatalogResponse;

class GetDataCatalogResponsePrivate : public AthenaResponsePrivate {

public:

    explicit GetDataCatalogResponsePrivate(GetDataCatalogResponse * const q);

    void parseGetDataCatalogResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDataCatalogResponse)
    Q_DISABLE_COPY(GetDataCatalogResponsePrivate)

};

} // namespace Athena
} // namespace QtAws

#endif
