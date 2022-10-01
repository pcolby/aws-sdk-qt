// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESOFTWAREUPDATEJOBREQUEST_P_H
#define QTAWS_CREATESOFTWAREUPDATEJOBREQUEST_P_H

#include "greengrassrequest_p.h"
#include "createsoftwareupdatejobrequest.h"

namespace QtAws {
namespace Greengrass {

class CreateSoftwareUpdateJobRequest;

class CreateSoftwareUpdateJobRequestPrivate : public GreengrassRequestPrivate {

public:
    CreateSoftwareUpdateJobRequestPrivate(const GreengrassRequest::Action action,
                                   CreateSoftwareUpdateJobRequest * const q);
    CreateSoftwareUpdateJobRequestPrivate(const CreateSoftwareUpdateJobRequestPrivate &other,
                                   CreateSoftwareUpdateJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSoftwareUpdateJobRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
