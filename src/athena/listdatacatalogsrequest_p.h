// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATACATALOGSREQUEST_P_H
#define QTAWS_LISTDATACATALOGSREQUEST_P_H

#include "athenarequest_p.h"
#include "listdatacatalogsrequest.h"

namespace QtAws {
namespace Athena {

class ListDataCatalogsRequest;

class ListDataCatalogsRequestPrivate : public AthenaRequestPrivate {

public:
    ListDataCatalogsRequestPrivate(const AthenaRequest::Action action,
                                   ListDataCatalogsRequest * const q);
    ListDataCatalogsRequestPrivate(const ListDataCatalogsRequestPrivate &other,
                                   ListDataCatalogsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDataCatalogsRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
