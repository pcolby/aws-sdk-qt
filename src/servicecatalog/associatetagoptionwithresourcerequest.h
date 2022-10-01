// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETAGOPTIONWITHRESOURCEREQUEST_H
#define QTAWS_ASSOCIATETAGOPTIONWITHRESOURCEREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class AssociateTagOptionWithResourceRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT AssociateTagOptionWithResourceRequest : public ServiceCatalogRequest {

public:
    AssociateTagOptionWithResourceRequest(const AssociateTagOptionWithResourceRequest &other);
    AssociateTagOptionWithResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateTagOptionWithResourceRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
