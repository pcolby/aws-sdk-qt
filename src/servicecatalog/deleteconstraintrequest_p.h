// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONSTRAINTREQUEST_P_H
#define QTAWS_DELETECONSTRAINTREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "deleteconstraintrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DeleteConstraintRequest;

class DeleteConstraintRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    DeleteConstraintRequestPrivate(const ServiceCatalogRequest::Action action,
                                   DeleteConstraintRequest * const q);
    DeleteConstraintRequestPrivate(const DeleteConstraintRequestPrivate &other,
                                   DeleteConstraintRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteConstraintRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
