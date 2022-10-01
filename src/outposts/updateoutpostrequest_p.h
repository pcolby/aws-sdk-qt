// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEOUTPOSTREQUEST_P_H
#define QTAWS_UPDATEOUTPOSTREQUEST_P_H

#include "outpostsrequest_p.h"
#include "updateoutpostrequest.h"

namespace QtAws {
namespace Outposts {

class UpdateOutpostRequest;

class UpdateOutpostRequestPrivate : public OutpostsRequestPrivate {

public:
    UpdateOutpostRequestPrivate(const OutpostsRequest::Action action,
                                   UpdateOutpostRequest * const q);
    UpdateOutpostRequestPrivate(const UpdateOutpostRequestPrivate &other,
                                   UpdateOutpostRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateOutpostRequest)

};

} // namespace Outposts
} // namespace QtAws

#endif
