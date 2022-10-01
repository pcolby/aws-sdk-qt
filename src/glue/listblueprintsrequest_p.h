// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBLUEPRINTSREQUEST_P_H
#define QTAWS_LISTBLUEPRINTSREQUEST_P_H

#include "gluerequest_p.h"
#include "listblueprintsrequest.h"

namespace QtAws {
namespace Glue {

class ListBlueprintsRequest;

class ListBlueprintsRequestPrivate : public GlueRequestPrivate {

public:
    ListBlueprintsRequestPrivate(const GlueRequest::Action action,
                                   ListBlueprintsRequest * const q);
    ListBlueprintsRequestPrivate(const ListBlueprintsRequestPrivate &other,
                                   ListBlueprintsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListBlueprintsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
