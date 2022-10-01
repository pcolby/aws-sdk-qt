// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTSERVERCATALOGRESPONSE_P_H
#define QTAWS_IMPORTSERVERCATALOGRESPONSE_P_H

#include "smsresponse_p.h"

namespace QtAws {
namespace Sms {

class ImportServerCatalogResponse;

class ImportServerCatalogResponsePrivate : public SmsResponsePrivate {

public:

    explicit ImportServerCatalogResponsePrivate(ImportServerCatalogResponse * const q);

    void parseImportServerCatalogResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ImportServerCatalogResponse)
    Q_DISABLE_COPY(ImportServerCatalogResponsePrivate)

};

} // namespace Sms
} // namespace QtAws

#endif
