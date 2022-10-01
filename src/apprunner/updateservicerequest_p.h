// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICEREQUEST_P_H
#define QTAWS_UPDATESERVICEREQUEST_P_H

#include "apprunnerrequest_p.h"
#include "updateservicerequest.h"

namespace QtAws {
namespace AppRunner {

class UpdateServiceRequest;

class UpdateServiceRequestPrivate : public AppRunnerRequestPrivate {

public:
    UpdateServiceRequestPrivate(const AppRunnerRequest::Action action,
                                   UpdateServiceRequest * const q);
    UpdateServiceRequestPrivate(const UpdateServiceRequestPrivate &other,
                                   UpdateServiceRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateServiceRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif
