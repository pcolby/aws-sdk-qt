// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFIGURATIONSETTRACKINGOPTIONSREQUEST_P_H
#define QTAWS_PUTCONFIGURATIONSETTRACKINGOPTIONSREQUEST_P_H

#include "sesv2request_p.h"
#include "putconfigurationsettrackingoptionsrequest.h"

namespace QtAws {
namespace SESv2 {

class PutConfigurationSetTrackingOptionsRequest;

class PutConfigurationSetTrackingOptionsRequestPrivate : public SESv2RequestPrivate {

public:
    PutConfigurationSetTrackingOptionsRequestPrivate(const SESv2Request::Action action,
                                   PutConfigurationSetTrackingOptionsRequest * const q);
    PutConfigurationSetTrackingOptionsRequestPrivate(const PutConfigurationSetTrackingOptionsRequestPrivate &other,
                                   PutConfigurationSetTrackingOptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutConfigurationSetTrackingOptionsRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
