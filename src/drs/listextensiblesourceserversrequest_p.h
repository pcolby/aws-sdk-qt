// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXTENSIBLESOURCESERVERSREQUEST_P_H
#define QTAWS_LISTEXTENSIBLESOURCESERVERSREQUEST_P_H

#include "drsrequest_p.h"
#include "listextensiblesourceserversrequest.h"

namespace QtAws {
namespace Drs {

class ListExtensibleSourceServersRequest;

class ListExtensibleSourceServersRequestPrivate : public DrsRequestPrivate {

public:
    ListExtensibleSourceServersRequestPrivate(const DrsRequest::Action action,
                                   ListExtensibleSourceServersRequest * const q);
    ListExtensibleSourceServersRequestPrivate(const ListExtensibleSourceServersRequestPrivate &other,
                                   ListExtensibleSourceServersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListExtensibleSourceServersRequest)

};

} // namespace Drs
} // namespace QtAws

#endif
