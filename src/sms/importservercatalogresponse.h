// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTSERVERCATALOGRESPONSE_H
#define QTAWS_IMPORTSERVERCATALOGRESPONSE_H

#include "smsresponse.h"
#include "importservercatalogrequest.h"

namespace QtAws {
namespace Sms {

class ImportServerCatalogResponsePrivate;

class QTAWSSMS_EXPORT ImportServerCatalogResponse : public SmsResponse {
    Q_OBJECT

public:
    ImportServerCatalogResponse(const ImportServerCatalogRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ImportServerCatalogRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportServerCatalogResponse)
    Q_DISABLE_COPY(ImportServerCatalogResponse)

};

} // namespace Sms
} // namespace QtAws

#endif
