// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONFIGURATIONREQUEST_P_H
#define QTAWS_UPDATECONFIGURATIONREQUEST_P_H

#include "inspector2request_p.h"
#include "updateconfigurationrequest.h"

namespace QtAws {
namespace Inspector2 {

class UpdateConfigurationRequest;

class UpdateConfigurationRequestPrivate : public Inspector2RequestPrivate {

public:
    UpdateConfigurationRequestPrivate(const Inspector2Request::Action action,
                                   UpdateConfigurationRequest * const q);
    UpdateConfigurationRequestPrivate(const UpdateConfigurationRequestPrivate &other,
                                   UpdateConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateConfigurationRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif
