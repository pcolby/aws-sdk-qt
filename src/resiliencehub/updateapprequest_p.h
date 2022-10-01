// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPREQUEST_P_H
#define QTAWS_UPDATEAPPREQUEST_P_H

#include "resiliencehubrequest_p.h"
#include "updateapprequest.h"

namespace QtAws {
namespace ResilienceHub {

class UpdateAppRequest;

class UpdateAppRequestPrivate : public ResilienceHubRequestPrivate {

public:
    UpdateAppRequestPrivate(const ResilienceHubRequest::Action action,
                                   UpdateAppRequest * const q);
    UpdateAppRequestPrivate(const UpdateAppRequestPrivate &other,
                                   UpdateAppRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAppRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
