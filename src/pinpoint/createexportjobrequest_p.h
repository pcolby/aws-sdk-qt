// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXPORTJOBREQUEST_P_H
#define QTAWS_CREATEEXPORTJOBREQUEST_P_H

#include "pinpointrequest_p.h"
#include "createexportjobrequest.h"

namespace QtAws {
namespace Pinpoint {

class CreateExportJobRequest;

class CreateExportJobRequestPrivate : public PinpointRequestPrivate {

public:
    CreateExportJobRequestPrivate(const PinpointRequest::Action action,
                                   CreateExportJobRequest * const q);
    CreateExportJobRequestPrivate(const CreateExportJobRequestPrivate &other,
                                   CreateExportJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateExportJobRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
