// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFLEETREQUEST_P_H
#define QTAWS_CREATEFLEETREQUEST_P_H

#include "worklinkrequest_p.h"
#include "createfleetrequest.h"

namespace QtAws {
namespace WorkLink {

class CreateFleetRequest;

class CreateFleetRequestPrivate : public WorkLinkRequestPrivate {

public:
    CreateFleetRequestPrivate(const WorkLinkRequest::Action action,
                                   CreateFleetRequest * const q);
    CreateFleetRequestPrivate(const CreateFleetRequestPrivate &other,
                                   CreateFleetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateFleetRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
