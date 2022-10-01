// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATACATALOGRESPONSE_H
#define QTAWS_UPDATEDATACATALOGRESPONSE_H

#include "athenaresponse.h"
#include "updatedatacatalogrequest.h"

namespace QtAws {
namespace Athena {

class UpdateDataCatalogResponsePrivate;

class QTAWSATHENA_EXPORT UpdateDataCatalogResponse : public AthenaResponse {
    Q_OBJECT

public:
    UpdateDataCatalogResponse(const UpdateDataCatalogRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDataCatalogRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDataCatalogResponse)
    Q_DISABLE_COPY(UpdateDataCatalogResponse)

};

} // namespace Athena
} // namespace QtAws

#endif
