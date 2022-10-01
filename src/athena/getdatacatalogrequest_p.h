// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATACATALOGREQUEST_P_H
#define QTAWS_GETDATACATALOGREQUEST_P_H

#include "athenarequest_p.h"
#include "getdatacatalogrequest.h"

namespace QtAws {
namespace Athena {

class GetDataCatalogRequest;

class GetDataCatalogRequestPrivate : public AthenaRequestPrivate {

public:
    GetDataCatalogRequestPrivate(const AthenaRequest::Action action,
                                   GetDataCatalogRequest * const q);
    GetDataCatalogRequestPrivate(const GetDataCatalogRequestPrivate &other,
                                   GetDataCatalogRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDataCatalogRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
