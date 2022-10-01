// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATACATALOGRESPONSE_P_H
#define QTAWS_CREATEDATACATALOGRESPONSE_P_H

#include "athenaresponse_p.h"

namespace QtAws {
namespace Athena {

class CreateDataCatalogResponse;

class CreateDataCatalogResponsePrivate : public AthenaResponsePrivate {

public:

    explicit CreateDataCatalogResponsePrivate(CreateDataCatalogResponse * const q);

    void parseCreateDataCatalogResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDataCatalogResponse)
    Q_DISABLE_COPY(CreateDataCatalogResponsePrivate)

};

} // namespace Athena
} // namespace QtAws

#endif
