// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVERCATALOGRESPONSE_H
#define QTAWS_DELETESERVERCATALOGRESPONSE_H

#include "smsresponse.h"
#include "deleteservercatalogrequest.h"

namespace QtAws {
namespace Sms {

class DeleteServerCatalogResponsePrivate;

class QTAWSSMS_EXPORT DeleteServerCatalogResponse : public SmsResponse {
    Q_OBJECT

public:
    DeleteServerCatalogResponse(const DeleteServerCatalogRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteServerCatalogRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteServerCatalogResponse)
    Q_DISABLE_COPY(DeleteServerCatalogResponse)

};

} // namespace Sms
} // namespace QtAws

#endif
