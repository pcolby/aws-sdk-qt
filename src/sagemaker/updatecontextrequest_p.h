// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTEXTREQUEST_P_H
#define QTAWS_UPDATECONTEXTREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "updatecontextrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateContextRequest;

class UpdateContextRequestPrivate : public SageMakerRequestPrivate {

public:
    UpdateContextRequestPrivate(const SageMakerRequest::Action action,
                                   UpdateContextRequest * const q);
    UpdateContextRequestPrivate(const UpdateContextRequestPrivate &other,
                                   UpdateContextRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateContextRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
