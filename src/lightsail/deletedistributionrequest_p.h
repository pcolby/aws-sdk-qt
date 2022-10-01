// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDISTRIBUTIONREQUEST_P_H
#define QTAWS_DELETEDISTRIBUTIONREQUEST_P_H

#include "lightsailrequest_p.h"
#include "deletedistributionrequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteDistributionRequest;

class DeleteDistributionRequestPrivate : public LightsailRequestPrivate {

public:
    DeleteDistributionRequestPrivate(const LightsailRequest::Action action,
                                   DeleteDistributionRequest * const q);
    DeleteDistributionRequestPrivate(const DeleteDistributionRequestPrivate &other,
                                   DeleteDistributionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDistributionRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
