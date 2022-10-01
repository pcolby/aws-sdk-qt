// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETAGOPTIONRESPONSE_H
#define QTAWS_DELETETAGOPTIONRESPONSE_H

#include "servicecatalogresponse.h"
#include "deletetagoptionrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DeleteTagOptionResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT DeleteTagOptionResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    DeleteTagOptionResponse(const DeleteTagOptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTagOptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTagOptionResponse)
    Q_DISABLE_COPY(DeleteTagOptionResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
