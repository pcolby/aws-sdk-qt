// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEQUANTUMTASKREQUEST_P_H
#define QTAWS_CREATEQUANTUMTASKREQUEST_P_H

#include "braketrequest_p.h"
#include "createquantumtaskrequest.h"

namespace QtAws {
namespace Braket {

class CreateQuantumTaskRequest;

class CreateQuantumTaskRequestPrivate : public BraketRequestPrivate {

public:
    CreateQuantumTaskRequestPrivate(const BraketRequest::Action action,
                                   CreateQuantumTaskRequest * const q);
    CreateQuantumTaskRequestPrivate(const CreateQuantumTaskRequestPrivate &other,
                                   CreateQuantumTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateQuantumTaskRequest)

};

} // namespace Braket
} // namespace QtAws

#endif
