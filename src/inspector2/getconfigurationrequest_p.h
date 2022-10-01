// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONFIGURATIONREQUEST_P_H
#define QTAWS_GETCONFIGURATIONREQUEST_P_H

#include "inspector2request_p.h"
#include "getconfigurationrequest.h"

namespace QtAws {
namespace Inspector2 {

class GetConfigurationRequest;

class GetConfigurationRequestPrivate : public Inspector2RequestPrivate {

public:
    GetConfigurationRequestPrivate(const Inspector2Request::Action action,
                                   GetConfigurationRequest * const q);
    GetConfigurationRequestPrivate(const GetConfigurationRequestPrivate &other,
                                   GetConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetConfigurationRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif
