// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXPORTJOBREQUEST_P_H
#define QTAWS_GETEXPORTJOBREQUEST_P_H

#include "pinpointrequest_p.h"
#include "getexportjobrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetExportJobRequest;

class GetExportJobRequestPrivate : public PinpointRequestPrivate {

public:
    GetExportJobRequestPrivate(const PinpointRequest::Action action,
                                   GetExportJobRequest * const q);
    GetExportJobRequestPrivate(const GetExportJobRequestPrivate &other,
                                   GetExportJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetExportJobRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
