// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONSTRAINTREQUEST_P_H
#define QTAWS_CREATECONSTRAINTREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "createconstraintrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class CreateConstraintRequest;

class CreateConstraintRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    CreateConstraintRequestPrivate(const ServiceCatalogRequest::Action action,
                                   CreateConstraintRequest * const q);
    CreateConstraintRequestPrivate(const CreateConstraintRequestPrivate &other,
                                   CreateConstraintRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateConstraintRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
