// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATACATALOGREQUEST_P_H
#define QTAWS_UPDATEDATACATALOGREQUEST_P_H

#include "athenarequest_p.h"
#include "updatedatacatalogrequest.h"

namespace QtAws {
namespace Athena {

class UpdateDataCatalogRequest;

class UpdateDataCatalogRequestPrivate : public AthenaRequestPrivate {

public:
    UpdateDataCatalogRequestPrivate(const AthenaRequest::Action action,
                                   UpdateDataCatalogRequest * const q);
    UpdateDataCatalogRequestPrivate(const UpdateDataCatalogRequestPrivate &other,
                                   UpdateDataCatalogRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDataCatalogRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
