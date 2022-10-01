// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROFILEJOBREQUEST_P_H
#define QTAWS_CREATEPROFILEJOBREQUEST_P_H

#include "databrewrequest_p.h"
#include "createprofilejobrequest.h"

namespace QtAws {
namespace DataBrew {

class CreateProfileJobRequest;

class CreateProfileJobRequestPrivate : public DataBrewRequestPrivate {

public:
    CreateProfileJobRequestPrivate(const DataBrewRequest::Action action,
                                   CreateProfileJobRequest * const q);
    CreateProfileJobRequestPrivate(const CreateProfileJobRequestPrivate &other,
                                   CreateProfileJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateProfileJobRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
