// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENVIRONMENTREQUEST_P_H
#define QTAWS_UPDATEENVIRONMENTREQUEST_P_H

#include "cloud9request_p.h"
#include "updateenvironmentrequest.h"

namespace QtAws {
namespace Cloud9 {

class UpdateEnvironmentRequest;

class UpdateEnvironmentRequestPrivate : public Cloud9RequestPrivate {

public:
    UpdateEnvironmentRequestPrivate(const Cloud9Request::Action action,
                                   UpdateEnvironmentRequest * const q);
    UpdateEnvironmentRequestPrivate(const UpdateEnvironmentRequestPrivate &other,
                                   UpdateEnvironmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateEnvironmentRequest)

};

} // namespace Cloud9
} // namespace QtAws

#endif
