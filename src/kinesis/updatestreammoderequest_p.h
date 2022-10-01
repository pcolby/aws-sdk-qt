// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTREAMMODEREQUEST_P_H
#define QTAWS_UPDATESTREAMMODEREQUEST_P_H

#include "kinesisrequest_p.h"
#include "updatestreammoderequest.h"

namespace QtAws {
namespace Kinesis {

class UpdateStreamModeRequest;

class UpdateStreamModeRequestPrivate : public KinesisRequestPrivate {

public:
    UpdateStreamModeRequestPrivate(const KinesisRequest::Action action,
                                   UpdateStreamModeRequest * const q);
    UpdateStreamModeRequestPrivate(const UpdateStreamModeRequestPrivate &other,
                                   UpdateStreamModeRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateStreamModeRequest)

};

} // namespace Kinesis
} // namespace QtAws

#endif
