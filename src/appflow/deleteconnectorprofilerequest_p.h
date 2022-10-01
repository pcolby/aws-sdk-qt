// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONNECTORPROFILEREQUEST_P_H
#define QTAWS_DELETECONNECTORPROFILEREQUEST_P_H

#include "appflowrequest_p.h"
#include "deleteconnectorprofilerequest.h"

namespace QtAws {
namespace Appflow {

class DeleteConnectorProfileRequest;

class DeleteConnectorProfileRequestPrivate : public AppflowRequestPrivate {

public:
    DeleteConnectorProfileRequestPrivate(const AppflowRequest::Action action,
                                   DeleteConnectorProfileRequest * const q);
    DeleteConnectorProfileRequestPrivate(const DeleteConnectorProfileRequestPrivate &other,
                                   DeleteConnectorProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteConnectorProfileRequest)

};

} // namespace Appflow
} // namespace QtAws

#endif
