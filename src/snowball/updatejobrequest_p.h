// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEJOBREQUEST_P_H
#define QTAWS_UPDATEJOBREQUEST_P_H

#include "snowballrequest_p.h"
#include "updatejobrequest.h"

namespace QtAws {
namespace Snowball {

class UpdateJobRequest;

class UpdateJobRequestPrivate : public SnowballRequestPrivate {

public:
    UpdateJobRequestPrivate(const SnowballRequest::Action action,
                                   UpdateJobRequest * const q);
    UpdateJobRequestPrivate(const UpdateJobRequestPrivate &other,
                                   UpdateJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateJobRequest)

};

} // namespace Snowball
} // namespace QtAws

#endif
