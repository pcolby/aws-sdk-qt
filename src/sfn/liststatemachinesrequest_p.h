// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTATEMACHINESREQUEST_P_H
#define QTAWS_LISTSTATEMACHINESREQUEST_P_H

#include "sfnrequest_p.h"
#include "liststatemachinesrequest.h"

namespace QtAws {
namespace Sfn {

class ListStateMachinesRequest;

class ListStateMachinesRequestPrivate : public SfnRequestPrivate {

public:
    ListStateMachinesRequestPrivate(const SfnRequest::Action action,
                                   ListStateMachinesRequest * const q);
    ListStateMachinesRequestPrivate(const ListStateMachinesRequestPrivate &other,
                                   ListStateMachinesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListStateMachinesRequest)

};

} // namespace Sfn
} // namespace QtAws

#endif
