// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATACATALOGRESPONSE_H
#define QTAWS_DELETEDATACATALOGRESPONSE_H

#include "athenaresponse.h"
#include "deletedatacatalogrequest.h"

namespace QtAws {
namespace Athena {

class DeleteDataCatalogResponsePrivate;

class QTAWSATHENA_EXPORT DeleteDataCatalogResponse : public AthenaResponse {
    Q_OBJECT

public:
    DeleteDataCatalogResponse(const DeleteDataCatalogRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDataCatalogRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDataCatalogResponse)
    Q_DISABLE_COPY(DeleteDataCatalogResponse)

};

} // namespace Athena
} // namespace QtAws

#endif
