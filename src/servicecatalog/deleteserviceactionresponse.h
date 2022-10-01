// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVICEACTIONRESPONSE_H
#define QTAWS_DELETESERVICEACTIONRESPONSE_H

#include "servicecatalogresponse.h"
#include "deleteserviceactionrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DeleteServiceActionResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT DeleteServiceActionResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    DeleteServiceActionResponse(const DeleteServiceActionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteServiceActionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteServiceActionResponse)
    Q_DISABLE_COPY(DeleteServiceActionResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
