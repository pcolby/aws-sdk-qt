// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATACATALOGRESPONSE_P_H
#define QTAWS_DELETEDATACATALOGRESPONSE_P_H

#include "athenaresponse_p.h"

namespace QtAws {
namespace Athena {

class DeleteDataCatalogResponse;

class DeleteDataCatalogResponsePrivate : public AthenaResponsePrivate {

public:

    explicit DeleteDataCatalogResponsePrivate(DeleteDataCatalogResponse * const q);

    void parseDeleteDataCatalogResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDataCatalogResponse)
    Q_DISABLE_COPY(DeleteDataCatalogResponsePrivate)

};

} // namespace Athena
} // namespace QtAws

#endif
