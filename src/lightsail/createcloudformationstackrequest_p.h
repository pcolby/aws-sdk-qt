// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLOUDFORMATIONSTACKREQUEST_P_H
#define QTAWS_CREATECLOUDFORMATIONSTACKREQUEST_P_H

#include "lightsailrequest_p.h"
#include "createcloudformationstackrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateCloudFormationStackRequest;

class CreateCloudFormationStackRequestPrivate : public LightsailRequestPrivate {

public:
    CreateCloudFormationStackRequestPrivate(const LightsailRequest::Action action,
                                   CreateCloudFormationStackRequest * const q);
    CreateCloudFormationStackRequestPrivate(const CreateCloudFormationStackRequestPrivate &other,
                                   CreateCloudFormationStackRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCloudFormationStackRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
