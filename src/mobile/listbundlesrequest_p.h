// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUNDLESREQUEST_P_H
#define QTAWS_LISTBUNDLESREQUEST_P_H

#include "mobilerequest_p.h"
#include "listbundlesrequest.h"

namespace QtAws {
namespace Mobile {

class ListBundlesRequest;

class ListBundlesRequestPrivate : public MobileRequestPrivate {

public:
    ListBundlesRequestPrivate(const MobileRequest::Action action,
                                   ListBundlesRequest * const q);
    ListBundlesRequestPrivate(const ListBundlesRequestPrivate &other,
                                   ListBundlesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListBundlesRequest)

};

} // namespace Mobile
} // namespace QtAws

#endif
