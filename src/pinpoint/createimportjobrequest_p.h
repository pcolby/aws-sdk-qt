// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIMPORTJOBREQUEST_P_H
#define QTAWS_CREATEIMPORTJOBREQUEST_P_H

#include "pinpointrequest_p.h"
#include "createimportjobrequest.h"

namespace QtAws {
namespace Pinpoint {

class CreateImportJobRequest;

class CreateImportJobRequestPrivate : public PinpointRequestPrivate {

public:
    CreateImportJobRequestPrivate(const PinpointRequest::Action action,
                                   CreateImportJobRequest * const q);
    CreateImportJobRequestPrivate(const CreateImportJobRequestPrivate &other,
                                   CreateImportJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateImportJobRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
