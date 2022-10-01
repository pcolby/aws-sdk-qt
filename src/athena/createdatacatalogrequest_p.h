// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATACATALOGREQUEST_P_H
#define QTAWS_CREATEDATACATALOGREQUEST_P_H

#include "athenarequest_p.h"
#include "createdatacatalogrequest.h"

namespace QtAws {
namespace Athena {

class CreateDataCatalogRequest;

class CreateDataCatalogRequestPrivate : public AthenaRequestPrivate {

public:
    CreateDataCatalogRequestPrivate(const AthenaRequest::Action action,
                                   CreateDataCatalogRequest * const q);
    CreateDataCatalogRequestPrivate(const CreateDataCatalogRequestPrivate &other,
                                   CreateDataCatalogRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDataCatalogRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
