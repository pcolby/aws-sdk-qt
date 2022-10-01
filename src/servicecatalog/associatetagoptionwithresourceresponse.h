// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETAGOPTIONWITHRESOURCERESPONSE_H
#define QTAWS_ASSOCIATETAGOPTIONWITHRESOURCERESPONSE_H

#include "servicecatalogresponse.h"
#include "associatetagoptionwithresourcerequest.h"

namespace QtAws {
namespace ServiceCatalog {

class AssociateTagOptionWithResourceResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT AssociateTagOptionWithResourceResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    AssociateTagOptionWithResourceResponse(const AssociateTagOptionWithResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateTagOptionWithResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateTagOptionWithResourceResponse)
    Q_DISABLE_COPY(AssociateTagOptionWithResourceResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
