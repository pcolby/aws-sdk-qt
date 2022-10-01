// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTEMPLATESREQUEST_P_H
#define QTAWS_LISTTEMPLATESREQUEST_P_H

#include "sesrequest_p.h"
#include "listtemplatesrequest.h"

namespace QtAws {
namespace Ses {

class ListTemplatesRequest;

class ListTemplatesRequestPrivate : public SesRequestPrivate {

public:
    ListTemplatesRequestPrivate(const SesRequest::Action action,
                                   ListTemplatesRequest * const q);
    ListTemplatesRequestPrivate(const ListTemplatesRequestPrivate &other,
                                   ListTemplatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTemplatesRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
