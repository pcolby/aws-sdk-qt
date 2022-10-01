// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTREAMSREQUEST_P_H
#define QTAWS_LISTSTREAMSREQUEST_P_H

#include "ivsrequest_p.h"
#include "liststreamsrequest.h"

namespace QtAws {
namespace Ivs {

class ListStreamsRequest;

class ListStreamsRequestPrivate : public IvsRequestPrivate {

public:
    ListStreamsRequestPrivate(const IvsRequest::Action action,
                                   ListStreamsRequest * const q);
    ListStreamsRequestPrivate(const ListStreamsRequestPrivate &other,
                                   ListStreamsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListStreamsRequest)

};

} // namespace Ivs
} // namespace QtAws

#endif
