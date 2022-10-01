// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONNECTORPROFILEREQUEST_P_H
#define QTAWS_CREATECONNECTORPROFILEREQUEST_P_H

#include "appflowrequest_p.h"
#include "createconnectorprofilerequest.h"

namespace QtAws {
namespace Appflow {

class CreateConnectorProfileRequest;

class CreateConnectorProfileRequestPrivate : public AppflowRequestPrivate {

public:
    CreateConnectorProfileRequestPrivate(const AppflowRequest::Action action,
                                   CreateConnectorProfileRequest * const q);
    CreateConnectorProfileRequestPrivate(const CreateConnectorProfileRequestPrivate &other,
                                   CreateConnectorProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateConnectorProfileRequest)

};

} // namespace Appflow
} // namespace QtAws

#endif
