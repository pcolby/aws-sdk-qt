// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRIGGERSREQUEST_P_H
#define QTAWS_LISTTRIGGERSREQUEST_P_H

#include "gluerequest_p.h"
#include "listtriggersrequest.h"

namespace QtAws {
namespace Glue {

class ListTriggersRequest;

class ListTriggersRequestPrivate : public GlueRequestPrivate {

public:
    ListTriggersRequestPrivate(const GlueRequest::Action action,
                                   ListTriggersRequest * const q);
    ListTriggersRequestPrivate(const ListTriggersRequestPrivate &other,
                                   ListTriggersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTriggersRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
