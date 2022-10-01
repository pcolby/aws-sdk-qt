// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONNECTORPROFILEREQUEST_P_H
#define QTAWS_UPDATECONNECTORPROFILEREQUEST_P_H

#include "appflowrequest_p.h"
#include "updateconnectorprofilerequest.h"

namespace QtAws {
namespace Appflow {

class UpdateConnectorProfileRequest;

class UpdateConnectorProfileRequestPrivate : public AppflowRequestPrivate {

public:
    UpdateConnectorProfileRequestPrivate(const AppflowRequest::Action action,
                                   UpdateConnectorProfileRequest * const q);
    UpdateConnectorProfileRequestPrivate(const UpdateConnectorProfileRequestPrivate &other,
                                   UpdateConnectorProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateConnectorProfileRequest)

};

} // namespace Appflow
} // namespace QtAws

#endif
