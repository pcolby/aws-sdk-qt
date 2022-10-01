// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOVERAGEREQUEST_P_H
#define QTAWS_LISTCOVERAGEREQUEST_P_H

#include "inspector2request_p.h"
#include "listcoveragerequest.h"

namespace QtAws {
namespace Inspector2 {

class ListCoverageRequest;

class ListCoverageRequestPrivate : public Inspector2RequestPrivate {

public:
    ListCoverageRequestPrivate(const Inspector2Request::Action action,
                                   ListCoverageRequest * const q);
    ListCoverageRequestPrivate(const ListCoverageRequestPrivate &other,
                                   ListCoverageRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCoverageRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif
