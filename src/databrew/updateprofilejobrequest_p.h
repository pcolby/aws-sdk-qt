// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROFILEJOBREQUEST_P_H
#define QTAWS_UPDATEPROFILEJOBREQUEST_P_H

#include "databrewrequest_p.h"
#include "updateprofilejobrequest.h"

namespace QtAws {
namespace DataBrew {

class UpdateProfileJobRequest;

class UpdateProfileJobRequestPrivate : public DataBrewRequestPrivate {

public:
    UpdateProfileJobRequestPrivate(const DataBrewRequest::Action action,
                                   UpdateProfileJobRequest * const q);
    UpdateProfileJobRequestPrivate(const UpdateProfileJobRequestPrivate &other,
                                   UpdateProfileJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateProfileJobRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
