// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTACKREQUEST_P_H
#define QTAWS_CREATESTACKREQUEST_P_H

#include "appstreamrequest_p.h"
#include "createstackrequest.h"

namespace QtAws {
namespace AppStream {

class CreateStackRequest;

class CreateStackRequestPrivate : public AppStreamRequestPrivate {

public:
    CreateStackRequestPrivate(const AppStreamRequest::Action action,
                                   CreateStackRequest * const q);
    CreateStackRequestPrivate(const CreateStackRequestPrivate &other,
                                   CreateStackRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateStackRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
