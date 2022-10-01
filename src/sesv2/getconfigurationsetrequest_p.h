// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONFIGURATIONSETREQUEST_P_H
#define QTAWS_GETCONFIGURATIONSETREQUEST_P_H

#include "sesv2request_p.h"
#include "getconfigurationsetrequest.h"

namespace QtAws {
namespace SESv2 {

class GetConfigurationSetRequest;

class GetConfigurationSetRequestPrivate : public SESv2RequestPrivate {

public:
    GetConfigurationSetRequestPrivate(const SESv2Request::Action action,
                                   GetConfigurationSetRequest * const q);
    GetConfigurationSetRequestPrivate(const GetConfigurationSetRequestPrivate &other,
                                   GetConfigurationSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetConfigurationSetRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
