// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICEACTIONREQUEST_P_H
#define QTAWS_UPDATESERVICEACTIONREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "updateserviceactionrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class UpdateServiceActionRequest;

class UpdateServiceActionRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    UpdateServiceActionRequestPrivate(const ServiceCatalogRequest::Action action,
                                   UpdateServiceActionRequest * const q);
    UpdateServiceActionRequestPrivate(const UpdateServiceActionRequestPrivate &other,
                                   UpdateServiceActionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateServiceActionRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
