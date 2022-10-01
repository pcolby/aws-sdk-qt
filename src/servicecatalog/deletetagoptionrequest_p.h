// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETAGOPTIONREQUEST_P_H
#define QTAWS_DELETETAGOPTIONREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "deletetagoptionrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DeleteTagOptionRequest;

class DeleteTagOptionRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    DeleteTagOptionRequestPrivate(const ServiceCatalogRequest::Action action,
                                   DeleteTagOptionRequest * const q);
    DeleteTagOptionRequestPrivate(const DeleteTagOptionRequestPrivate &other,
                                   DeleteTagOptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTagOptionRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
