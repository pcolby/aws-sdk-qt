// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREGISTRIESREQUEST_P_H
#define QTAWS_LISTREGISTRIESREQUEST_P_H

#include "gluerequest_p.h"
#include "listregistriesrequest.h"

namespace QtAws {
namespace Glue {

class ListRegistriesRequest;

class ListRegistriesRequestPrivate : public GlueRequestPrivate {

public:
    ListRegistriesRequestPrivate(const GlueRequest::Action action,
                                   ListRegistriesRequest * const q);
    ListRegistriesRequestPrivate(const ListRegistriesRequestPrivate &other,
                                   ListRegistriesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRegistriesRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
