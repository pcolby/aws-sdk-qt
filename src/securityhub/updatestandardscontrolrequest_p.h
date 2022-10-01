// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTANDARDSCONTROLREQUEST_P_H
#define QTAWS_UPDATESTANDARDSCONTROLREQUEST_P_H

#include "securityhubrequest_p.h"
#include "updatestandardscontrolrequest.h"

namespace QtAws {
namespace SecurityHub {

class UpdateStandardsControlRequest;

class UpdateStandardsControlRequestPrivate : public SecurityHubRequestPrivate {

public:
    UpdateStandardsControlRequestPrivate(const SecurityHubRequest::Action action,
                                   UpdateStandardsControlRequest * const q);
    UpdateStandardsControlRequestPrivate(const UpdateStandardsControlRequestPrivate &other,
                                   UpdateStandardsControlRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateStandardsControlRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
