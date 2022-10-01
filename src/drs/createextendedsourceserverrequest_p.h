// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXTENDEDSOURCESERVERREQUEST_P_H
#define QTAWS_CREATEEXTENDEDSOURCESERVERREQUEST_P_H

#include "drsrequest_p.h"
#include "createextendedsourceserverrequest.h"

namespace QtAws {
namespace Drs {

class CreateExtendedSourceServerRequest;

class CreateExtendedSourceServerRequestPrivate : public DrsRequestPrivate {

public:
    CreateExtendedSourceServerRequestPrivate(const DrsRequest::Action action,
                                   CreateExtendedSourceServerRequest * const q);
    CreateExtendedSourceServerRequestPrivate(const CreateExtendedSourceServerRequestPrivate &other,
                                   CreateExtendedSourceServerRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateExtendedSourceServerRequest)

};

} // namespace Drs
} // namespace QtAws

#endif
