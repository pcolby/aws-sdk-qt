// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGURATIONSETTRACKINGOPTIONSREQUEST_P_H
#define QTAWS_DELETECONFIGURATIONSETTRACKINGOPTIONSREQUEST_P_H

#include "sesrequest_p.h"
#include "deleteconfigurationsettrackingoptionsrequest.h"

namespace QtAws {
namespace Ses {

class DeleteConfigurationSetTrackingOptionsRequest;

class DeleteConfigurationSetTrackingOptionsRequestPrivate : public SesRequestPrivate {

public:
    DeleteConfigurationSetTrackingOptionsRequestPrivate(const SesRequest::Action action,
                                   DeleteConfigurationSetTrackingOptionsRequest * const q);
    DeleteConfigurationSetTrackingOptionsRequestPrivate(const DeleteConfigurationSetTrackingOptionsRequestPrivate &other,
                                   DeleteConfigurationSetTrackingOptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteConfigurationSetTrackingOptionsRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
