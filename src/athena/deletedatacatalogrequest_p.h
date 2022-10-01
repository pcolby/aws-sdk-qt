// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATACATALOGREQUEST_P_H
#define QTAWS_DELETEDATACATALOGREQUEST_P_H

#include "athenarequest_p.h"
#include "deletedatacatalogrequest.h"

namespace QtAws {
namespace Athena {

class DeleteDataCatalogRequest;

class DeleteDataCatalogRequestPrivate : public AthenaRequestPrivate {

public:
    DeleteDataCatalogRequestPrivate(const AthenaRequest::Action action,
                                   DeleteDataCatalogRequest * const q);
    DeleteDataCatalogRequestPrivate(const DeleteDataCatalogRequestPrivate &other,
                                   DeleteDataCatalogRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDataCatalogRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
