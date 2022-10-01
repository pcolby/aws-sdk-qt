// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICEACTIONRESPONSE_H
#define QTAWS_UPDATESERVICEACTIONRESPONSE_H

#include "servicecatalogresponse.h"
#include "updateserviceactionrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class UpdateServiceActionResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT UpdateServiceActionResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    UpdateServiceActionResponse(const UpdateServiceActionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateServiceActionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateServiceActionResponse)
    Q_DISABLE_COPY(UpdateServiceActionResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
