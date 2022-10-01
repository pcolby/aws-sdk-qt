// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOUTPOSTREQUEST_P_H
#define QTAWS_GETOUTPOSTREQUEST_P_H

#include "outpostsrequest_p.h"
#include "getoutpostrequest.h"

namespace QtAws {
namespace Outposts {

class GetOutpostRequest;

class GetOutpostRequestPrivate : public OutpostsRequestPrivate {

public:
    GetOutpostRequestPrivate(const OutpostsRequest::Action action,
                                   GetOutpostRequest * const q);
    GetOutpostRequestPrivate(const GetOutpostRequestPrivate &other,
                                   GetOutpostRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetOutpostRequest)

};

} // namespace Outposts
} // namespace QtAws

#endif
