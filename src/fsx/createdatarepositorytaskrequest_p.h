// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATAREPOSITORYTASKREQUEST_P_H
#define QTAWS_CREATEDATAREPOSITORYTASKREQUEST_P_H

#include "fsxrequest_p.h"
#include "createdatarepositorytaskrequest.h"

namespace QtAws {
namespace FSx {

class CreateDataRepositoryTaskRequest;

class CreateDataRepositoryTaskRequestPrivate : public FSxRequestPrivate {

public:
    CreateDataRepositoryTaskRequestPrivate(const FSxRequest::Action action,
                                   CreateDataRepositoryTaskRequest * const q);
    CreateDataRepositoryTaskRequestPrivate(const CreateDataRepositoryTaskRequestPrivate &other,
                                   CreateDataRepositoryTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDataRepositoryTaskRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
