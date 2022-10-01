// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGRAPHREQUEST_P_H
#define QTAWS_CREATEGRAPHREQUEST_P_H

#include "detectiverequest_p.h"
#include "creategraphrequest.h"

namespace QtAws {
namespace Detective {

class CreateGraphRequest;

class CreateGraphRequestPrivate : public DetectiveRequestPrivate {

public:
    CreateGraphRequestPrivate(const DetectiveRequest::Action action,
                                   CreateGraphRequest * const q);
    CreateGraphRequestPrivate(const CreateGraphRequestPrivate &other,
                                   CreateGraphRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateGraphRequest)

};

} // namespace Detective
} // namespace QtAws

#endif
