// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPARTSREQUEST_P_H
#define QTAWS_LISTPARTSREQUEST_P_H

#include "glacierrequest_p.h"
#include "listpartsrequest.h"

namespace QtAws {
namespace Glacier {

class ListPartsRequest;

class ListPartsRequestPrivate : public GlacierRequestPrivate {

public:
    ListPartsRequestPrivate(const GlacierRequest::Action action,
                                   ListPartsRequest * const q);
    ListPartsRequestPrivate(const ListPartsRequestPrivate &other,
                                   ListPartsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPartsRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
