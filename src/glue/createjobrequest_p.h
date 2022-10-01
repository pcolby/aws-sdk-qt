// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEJOBREQUEST_P_H
#define QTAWS_CREATEJOBREQUEST_P_H

#include "gluerequest_p.h"
#include "createjobrequest.h"

namespace QtAws {
namespace Glue {

class CreateJobRequest;

class CreateJobRequestPrivate : public GlueRequestPrivate {

public:
    CreateJobRequestPrivate(const GlueRequest::Action action,
                                   CreateJobRequest * const q);
    CreateJobRequestPrivate(const CreateJobRequestPrivate &other,
                                   CreateJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateJobRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
