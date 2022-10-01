// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTAINERSERVICEREQUEST_P_H
#define QTAWS_DELETECONTAINERSERVICEREQUEST_P_H

#include "lightsailrequest_p.h"
#include "deletecontainerservicerequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteContainerServiceRequest;

class DeleteContainerServiceRequestPrivate : public LightsailRequestPrivate {

public:
    DeleteContainerServiceRequestPrivate(const LightsailRequest::Action action,
                                   DeleteContainerServiceRequest * const q);
    DeleteContainerServiceRequestPrivate(const DeleteContainerServiceRequestPrivate &other,
                                   DeleteContainerServiceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteContainerServiceRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
