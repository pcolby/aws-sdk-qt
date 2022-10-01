// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYPRODUCTRESPONSE_H
#define QTAWS_COPYPRODUCTRESPONSE_H

#include "servicecatalogresponse.h"
#include "copyproductrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class CopyProductResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT CopyProductResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    CopyProductResponse(const CopyProductRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CopyProductRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CopyProductResponse)
    Q_DISABLE_COPY(CopyProductResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
