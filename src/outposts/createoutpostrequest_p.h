// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEOUTPOSTREQUEST_P_H
#define QTAWS_CREATEOUTPOSTREQUEST_P_H

#include "outpostsrequest_p.h"
#include "createoutpostrequest.h"

namespace QtAws {
namespace Outposts {

class CreateOutpostRequest;

class CreateOutpostRequestPrivate : public OutpostsRequestPrivate {

public:
    CreateOutpostRequestPrivate(const OutpostsRequest::Action action,
                                   CreateOutpostRequest * const q);
    CreateOutpostRequestPrivate(const CreateOutpostRequestPrivate &other,
                                   CreateOutpostRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateOutpostRequest)

};

} // namespace Outposts
} // namespace QtAws

#endif
