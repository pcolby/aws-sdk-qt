// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIMPORTJOBREQUEST_P_H
#define QTAWS_GETIMPORTJOBREQUEST_P_H

#include "pinpointrequest_p.h"
#include "getimportjobrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetImportJobRequest;

class GetImportJobRequestPrivate : public PinpointRequestPrivate {

public:
    GetImportJobRequestPrivate(const PinpointRequest::Action action,
                                   GetImportJobRequest * const q);
    GetImportJobRequestPrivate(const GetImportJobRequestPrivate &other,
                                   GetImportJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetImportJobRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
