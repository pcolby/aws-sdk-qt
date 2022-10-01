// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESERVICEACTIONREQUEST_P_H
#define QTAWS_CREATESERVICEACTIONREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "createserviceactionrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class CreateServiceActionRequest;

class CreateServiceActionRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    CreateServiceActionRequestPrivate(const ServiceCatalogRequest::Action action,
                                   CreateServiceActionRequest * const q);
    CreateServiceActionRequestPrivate(const CreateServiceActionRequestPrivate &other,
                                   CreateServiceActionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateServiceActionRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
