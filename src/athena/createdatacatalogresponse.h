// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATACATALOGRESPONSE_H
#define QTAWS_CREATEDATACATALOGRESPONSE_H

#include "athenaresponse.h"
#include "createdatacatalogrequest.h"

namespace QtAws {
namespace Athena {

class CreateDataCatalogResponsePrivate;

class QTAWSATHENA_EXPORT CreateDataCatalogResponse : public AthenaResponse {
    Q_OBJECT

public:
    CreateDataCatalogResponse(const CreateDataCatalogRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDataCatalogRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDataCatalogResponse)
    Q_DISABLE_COPY(CreateDataCatalogResponse)

};

} // namespace Athena
} // namespace QtAws

#endif
