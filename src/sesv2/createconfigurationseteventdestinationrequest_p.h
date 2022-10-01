// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONFIGURATIONSETEVENTDESTINATIONREQUEST_P_H
#define QTAWS_CREATECONFIGURATIONSETEVENTDESTINATIONREQUEST_P_H

#include "sesv2request_p.h"
#include "createconfigurationseteventdestinationrequest.h"

namespace QtAws {
namespace SESv2 {

class CreateConfigurationSetEventDestinationRequest;

class CreateConfigurationSetEventDestinationRequestPrivate : public SESv2RequestPrivate {

public:
    CreateConfigurationSetEventDestinationRequestPrivate(const SESv2Request::Action action,
                                   CreateConfigurationSetEventDestinationRequest * const q);
    CreateConfigurationSetEventDestinationRequestPrivate(const CreateConfigurationSetEventDestinationRequestPrivate &other,
                                   CreateConfigurationSetEventDestinationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateConfigurationSetEventDestinationRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
