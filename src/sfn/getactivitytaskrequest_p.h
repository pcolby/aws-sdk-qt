// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACTIVITYTASKREQUEST_P_H
#define QTAWS_GETACTIVITYTASKREQUEST_P_H

#include "sfnrequest_p.h"
#include "getactivitytaskrequest.h"

namespace QtAws {
namespace Sfn {

class GetActivityTaskRequest;

class GetActivityTaskRequestPrivate : public SfnRequestPrivate {

public:
    GetActivityTaskRequestPrivate(const SfnRequest::Action action,
                                   GetActivityTaskRequest * const q);
    GetActivityTaskRequestPrivate(const GetActivityTaskRequestPrivate &other,
                                   GetActivityTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetActivityTaskRequest)

};

} // namespace Sfn
} // namespace QtAws

#endif
