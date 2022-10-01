// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTCONFIGURATIONSREQUEST_P_H
#define QTAWS_EXPORTCONFIGURATIONSREQUEST_P_H

#include "applicationdiscoveryrequest_p.h"
#include "exportconfigurationsrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class ExportConfigurationsRequest;

class ExportConfigurationsRequestPrivate : public ApplicationDiscoveryRequestPrivate {

public:
    ExportConfigurationsRequestPrivate(const ApplicationDiscoveryRequest::Action action,
                                   ExportConfigurationsRequest * const q);
    ExportConfigurationsRequestPrivate(const ExportConfigurationsRequestPrivate &other,
                                   ExportConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ExportConfigurationsRequest)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
