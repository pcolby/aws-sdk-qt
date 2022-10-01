// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONFIGURATIONSETREQUEST_P_H
#define QTAWS_CREATECONFIGURATIONSETREQUEST_P_H

#include "sesv2request_p.h"
#include "createconfigurationsetrequest.h"

namespace QtAws {
namespace SESv2 {

class CreateConfigurationSetRequest;

class CreateConfigurationSetRequestPrivate : public SESv2RequestPrivate {

public:
    CreateConfigurationSetRequestPrivate(const SESv2Request::Action action,
                                   CreateConfigurationSetRequest * const q);
    CreateConfigurationSetRequestPrivate(const CreateConfigurationSetRequestPrivate &other,
                                   CreateConfigurationSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateConfigurationSetRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
