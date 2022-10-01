// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDESTINATIONREQUEST_P_H
#define QTAWS_UPDATEDESTINATIONREQUEST_P_H

#include "firehoserequest_p.h"
#include "updatedestinationrequest.h"

namespace QtAws {
namespace Firehose {

class UpdateDestinationRequest;

class UpdateDestinationRequestPrivate : public FirehoseRequestPrivate {

public:
    UpdateDestinationRequestPrivate(const FirehoseRequest::Action action,
                                   UpdateDestinationRequest * const q);
    UpdateDestinationRequestPrivate(const UpdateDestinationRequestPrivate &other,
                                   UpdateDestinationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDestinationRequest)

};

} // namespace Firehose
} // namespace QtAws

#endif
