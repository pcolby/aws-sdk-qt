// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVICEACTIONREQUEST_P_H
#define QTAWS_DELETESERVICEACTIONREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "deleteserviceactionrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DeleteServiceActionRequest;

class DeleteServiceActionRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    DeleteServiceActionRequestPrivate(const ServiceCatalogRequest::Action action,
                                   DeleteServiceActionRequest * const q);
    DeleteServiceActionRequestPrivate(const DeleteServiceActionRequestPrivate &other,
                                   DeleteServiceActionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteServiceActionRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
