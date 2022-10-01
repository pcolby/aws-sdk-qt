// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONSTRAINTREQUEST_P_H
#define QTAWS_UPDATECONSTRAINTREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "updateconstraintrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class UpdateConstraintRequest;

class UpdateConstraintRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    UpdateConstraintRequestPrivate(const ServiceCatalogRequest::Action action,
                                   UpdateConstraintRequest * const q);
    UpdateConstraintRequestPrivate(const UpdateConstraintRequestPrivate &other,
                                   UpdateConstraintRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateConstraintRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
