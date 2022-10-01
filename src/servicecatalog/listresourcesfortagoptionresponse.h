// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCESFORTAGOPTIONRESPONSE_H
#define QTAWS_LISTRESOURCESFORTAGOPTIONRESPONSE_H

#include "servicecatalogresponse.h"
#include "listresourcesfortagoptionrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListResourcesForTagOptionResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT ListResourcesForTagOptionResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    ListResourcesForTagOptionResponse(const ListResourcesForTagOptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListResourcesForTagOptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResourcesForTagOptionResponse)
    Q_DISABLE_COPY(ListResourcesForTagOptionResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
