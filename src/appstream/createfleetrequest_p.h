// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFLEETREQUEST_P_H
#define QTAWS_CREATEFLEETREQUEST_P_H

#include "appstreamrequest_p.h"
#include "createfleetrequest.h"

namespace QtAws {
namespace AppStream {

class CreateFleetRequest;

class CreateFleetRequestPrivate : public AppStreamRequestPrivate {

public:
    CreateFleetRequestPrivate(const AppStreamRequest::Action action,
                                   CreateFleetRequest * const q);
    CreateFleetRequestPrivate(const CreateFleetRequestPrivate &other,
                                   CreateFleetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateFleetRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
