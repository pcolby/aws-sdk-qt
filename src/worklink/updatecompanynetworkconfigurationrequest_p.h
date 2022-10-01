// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECOMPANYNETWORKCONFIGURATIONREQUEST_P_H
#define QTAWS_UPDATECOMPANYNETWORKCONFIGURATIONREQUEST_P_H

#include "worklinkrequest_p.h"
#include "updatecompanynetworkconfigurationrequest.h"

namespace QtAws {
namespace WorkLink {

class UpdateCompanyNetworkConfigurationRequest;

class UpdateCompanyNetworkConfigurationRequestPrivate : public WorkLinkRequestPrivate {

public:
    UpdateCompanyNetworkConfigurationRequestPrivate(const WorkLinkRequest::Action action,
                                   UpdateCompanyNetworkConfigurationRequest * const q);
    UpdateCompanyNetworkConfigurationRequestPrivate(const UpdateCompanyNetworkConfigurationRequestPrivate &other,
                                   UpdateCompanyNetworkConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateCompanyNetworkConfigurationRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
