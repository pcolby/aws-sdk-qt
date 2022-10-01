// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATACATALOGRESPONSE_P_H
#define QTAWS_UPDATEDATACATALOGRESPONSE_P_H

#include "athenaresponse_p.h"

namespace QtAws {
namespace Athena {

class UpdateDataCatalogResponse;

class UpdateDataCatalogResponsePrivate : public AthenaResponsePrivate {

public:

    explicit UpdateDataCatalogResponsePrivate(UpdateDataCatalogResponse * const q);

    void parseUpdateDataCatalogResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDataCatalogResponse)
    Q_DISABLE_COPY(UpdateDataCatalogResponsePrivate)

};

} // namespace Athena
} // namespace QtAws

#endif
