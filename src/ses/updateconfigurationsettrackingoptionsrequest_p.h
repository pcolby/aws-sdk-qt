// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONFIGURATIONSETTRACKINGOPTIONSREQUEST_P_H
#define QTAWS_UPDATECONFIGURATIONSETTRACKINGOPTIONSREQUEST_P_H

#include "sesrequest_p.h"
#include "updateconfigurationsettrackingoptionsrequest.h"

namespace QtAws {
namespace Ses {

class UpdateConfigurationSetTrackingOptionsRequest;

class UpdateConfigurationSetTrackingOptionsRequestPrivate : public SesRequestPrivate {

public:
    UpdateConfigurationSetTrackingOptionsRequestPrivate(const SesRequest::Action action,
                                   UpdateConfigurationSetTrackingOptionsRequest * const q);
    UpdateConfigurationSetTrackingOptionsRequestPrivate(const UpdateConfigurationSetTrackingOptionsRequestPrivate &other,
                                   UpdateConfigurationSetTrackingOptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateConfigurationSetTrackingOptionsRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
