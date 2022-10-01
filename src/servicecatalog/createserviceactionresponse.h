// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESERVICEACTIONRESPONSE_H
#define QTAWS_CREATESERVICEACTIONRESPONSE_H

#include "servicecatalogresponse.h"
#include "createserviceactionrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class CreateServiceActionResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT CreateServiceActionResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    CreateServiceActionResponse(const CreateServiceActionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateServiceActionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateServiceActionResponse)
    Q_DISABLE_COPY(CreateServiceActionResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
