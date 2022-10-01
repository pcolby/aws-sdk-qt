// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELQUANTUMTASKREQUEST_P_H
#define QTAWS_CANCELQUANTUMTASKREQUEST_P_H

#include "braketrequest_p.h"
#include "cancelquantumtaskrequest.h"

namespace QtAws {
namespace Braket {

class CancelQuantumTaskRequest;

class CancelQuantumTaskRequestPrivate : public BraketRequestPrivate {

public:
    CancelQuantumTaskRequestPrivate(const BraketRequest::Action action,
                                   CancelQuantumTaskRequest * const q);
    CancelQuantumTaskRequestPrivate(const CancelQuantumTaskRequestPrivate &other,
                                   CancelQuantumTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelQuantumTaskRequest)

};

} // namespace Braket
} // namespace QtAws

#endif
