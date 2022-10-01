// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBREQUEST_P_H
#define QTAWS_GETJOBREQUEST_P_H

#include "braketrequest_p.h"
#include "getjobrequest.h"

namespace QtAws {
namespace Braket {

class GetJobRequest;

class GetJobRequestPrivate : public BraketRequestPrivate {

public:
    GetJobRequestPrivate(const BraketRequest::Action action,
                                   GetJobRequest * const q);
    GetJobRequestPrivate(const GetJobRequestPrivate &other,
                                   GetJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetJobRequest)

};

} // namespace Braket
} // namespace QtAws

#endif
