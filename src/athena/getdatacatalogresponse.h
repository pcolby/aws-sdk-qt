// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATACATALOGRESPONSE_H
#define QTAWS_GETDATACATALOGRESPONSE_H

#include "athenaresponse.h"
#include "getdatacatalogrequest.h"

namespace QtAws {
namespace Athena {

class GetDataCatalogResponsePrivate;

class QTAWSATHENA_EXPORT GetDataCatalogResponse : public AthenaResponse {
    Q_OBJECT

public:
    GetDataCatalogResponse(const GetDataCatalogRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDataCatalogRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDataCatalogResponse)
    Q_DISABLE_COPY(GetDataCatalogResponse)

};

} // namespace Athena
} // namespace QtAws

#endif
