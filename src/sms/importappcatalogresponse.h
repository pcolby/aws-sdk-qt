// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTAPPCATALOGRESPONSE_H
#define QTAWS_IMPORTAPPCATALOGRESPONSE_H

#include "smsresponse.h"
#include "importappcatalogrequest.h"

namespace QtAws {
namespace Sms {

class ImportAppCatalogResponsePrivate;

class QTAWSSMS_EXPORT ImportAppCatalogResponse : public SmsResponse {
    Q_OBJECT

public:
    ImportAppCatalogResponse(const ImportAppCatalogRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ImportAppCatalogRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportAppCatalogResponse)
    Q_DISABLE_COPY(ImportAppCatalogResponse)

};

} // namespace Sms
} // namespace QtAws

#endif
