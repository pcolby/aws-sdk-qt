// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEJOBREQUEST_P_H
#define QTAWS_CREATEJOBREQUEST_P_H

#include "snowballrequest_p.h"
#include "createjobrequest.h"

namespace QtAws {
namespace Snowball {

class CreateJobRequest;

class CreateJobRequestPrivate : public SnowballRequestPrivate {

public:
    CreateJobRequestPrivate(const SnowballRequest::Action action,
                                   CreateJobRequest * const q);
    CreateJobRequestPrivate(const CreateJobRequestPrivate &other,
                                   CreateJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateJobRequest)

};

} // namespace Snowball
} // namespace QtAws

#endif
