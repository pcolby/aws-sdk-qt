// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONFIGURATIONSETTRACKINGOPTIONSREQUEST_P_H
#define QTAWS_CREATECONFIGURATIONSETTRACKINGOPTIONSREQUEST_P_H

#include "sesrequest_p.h"
#include "createconfigurationsettrackingoptionsrequest.h"

namespace QtAws {
namespace Ses {

class CreateConfigurationSetTrackingOptionsRequest;

class CreateConfigurationSetTrackingOptionsRequestPrivate : public SesRequestPrivate {

public:
    CreateConfigurationSetTrackingOptionsRequestPrivate(const SesRequest::Action action,
                                   CreateConfigurationSetTrackingOptionsRequest * const q);
    CreateConfigurationSetTrackingOptionsRequestPrivate(const CreateConfigurationSetTrackingOptionsRequestPrivate &other,
                                   CreateConfigurationSetTrackingOptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateConfigurationSetTrackingOptionsRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
