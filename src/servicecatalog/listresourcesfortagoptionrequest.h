// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCESFORTAGOPTIONREQUEST_H
#define QTAWS_LISTRESOURCESFORTAGOPTIONREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListResourcesForTagOptionRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT ListResourcesForTagOptionRequest : public ServiceCatalogRequest {

public:
    ListResourcesForTagOptionRequest(const ListResourcesForTagOptionRequest &other);
    ListResourcesForTagOptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListResourcesForTagOptionRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
