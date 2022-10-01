// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKSPACEREQUEST_P_H
#define QTAWS_GETWORKSPACEREQUEST_P_H

#include "iottwinmakerrequest_p.h"
#include "getworkspacerequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class GetWorkspaceRequest;

class GetWorkspaceRequestPrivate : public IoTTwinMakerRequestPrivate {

public:
    GetWorkspaceRequestPrivate(const IoTTwinMakerRequest::Action action,
                                   GetWorkspaceRequest * const q);
    GetWorkspaceRequestPrivate(const GetWorkspaceRequestPrivate &other,
                                   GetWorkspaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetWorkspaceRequest)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
