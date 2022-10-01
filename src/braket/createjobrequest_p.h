// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEJOBREQUEST_P_H
#define QTAWS_CREATEJOBREQUEST_P_H

#include "braketrequest_p.h"
#include "createjobrequest.h"

namespace QtAws {
namespace Braket {

class CreateJobRequest;

class CreateJobRequestPrivate : public BraketRequestPrivate {

public:
    CreateJobRequestPrivate(const BraketRequest::Action action,
                                   CreateJobRequest * const q);
    CreateJobRequestPrivate(const CreateJobRequestPrivate &other,
                                   CreateJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateJobRequest)

};

} // namespace Braket
} // namespace QtAws

#endif
