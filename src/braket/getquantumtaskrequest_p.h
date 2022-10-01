// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUANTUMTASKREQUEST_P_H
#define QTAWS_GETQUANTUMTASKREQUEST_P_H

#include "braketrequest_p.h"
#include "getquantumtaskrequest.h"

namespace QtAws {
namespace Braket {

class GetQuantumTaskRequest;

class GetQuantumTaskRequestPrivate : public BraketRequestPrivate {

public:
    GetQuantumTaskRequestPrivate(const BraketRequest::Action action,
                                   GetQuantumTaskRequest * const q);
    GetQuantumTaskRequestPrivate(const GetQuantumTaskRequestPrivate &other,
                                   GetQuantumTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetQuantumTaskRequest)

};

} // namespace Braket
} // namespace QtAws

#endif
