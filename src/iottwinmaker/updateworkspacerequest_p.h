// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORKSPACEREQUEST_P_H
#define QTAWS_UPDATEWORKSPACEREQUEST_P_H

#include "iottwinmakerrequest_p.h"
#include "updateworkspacerequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class UpdateWorkspaceRequest;

class UpdateWorkspaceRequestPrivate : public IoTTwinMakerRequestPrivate {

public:
    UpdateWorkspaceRequestPrivate(const IoTTwinMakerRequest::Action action,
                                   UpdateWorkspaceRequest * const q);
    UpdateWorkspaceRequestPrivate(const UpdateWorkspaceRequestPrivate &other,
                                   UpdateWorkspaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateWorkspaceRequest)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
