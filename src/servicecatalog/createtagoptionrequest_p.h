// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETAGOPTIONREQUEST_P_H
#define QTAWS_CREATETAGOPTIONREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "createtagoptionrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class CreateTagOptionRequest;

class CreateTagOptionRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    CreateTagOptionRequestPrivate(const ServiceCatalogRequest::Action action,
                                   CreateTagOptionRequest * const q);
    CreateTagOptionRequestPrivate(const CreateTagOptionRequestPrivate &other,
                                   CreateTagOptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTagOptionRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
