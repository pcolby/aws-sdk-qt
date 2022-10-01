// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTEPSREQUEST_P_H
#define QTAWS_LISTSTEPSREQUEST_P_H

#include "emrrequest_p.h"
#include "liststepsrequest.h"

namespace QtAws {
namespace Emr {

class ListStepsRequest;

class ListStepsRequestPrivate : public EmrRequestPrivate {

public:
    ListStepsRequestPrivate(const EmrRequest::Action action,
                                   ListStepsRequest * const q);
    ListStepsRequestPrivate(const ListStepsRequestPrivate &other,
                                   ListStepsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListStepsRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
