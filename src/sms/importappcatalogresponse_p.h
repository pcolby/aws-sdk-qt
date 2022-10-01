// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTAPPCATALOGRESPONSE_P_H
#define QTAWS_IMPORTAPPCATALOGRESPONSE_P_H

#include "smsresponse_p.h"

namespace QtAws {
namespace Sms {

class ImportAppCatalogResponse;

class ImportAppCatalogResponsePrivate : public SmsResponsePrivate {

public:

    explicit ImportAppCatalogResponsePrivate(ImportAppCatalogResponse * const q);

    void parseImportAppCatalogResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ImportAppCatalogResponse)
    Q_DISABLE_COPY(ImportAppCatalogResponsePrivate)

};

} // namespace Sms
} // namespace QtAws

#endif
