// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESEGMENTREQUEST_P_H
#define QTAWS_CREATESEGMENTREQUEST_P_H

#include "evidentlyrequest_p.h"
#include "createsegmentrequest.h"

namespace QtAws {
namespace Evidently {

class CreateSegmentRequest;

class CreateSegmentRequestPrivate : public EvidentlyRequestPrivate {

public:
    CreateSegmentRequestPrivate(const EvidentlyRequest::Action action,
                                   CreateSegmentRequest * const q);
    CreateSegmentRequestPrivate(const CreateSegmentRequestPrivate &other,
                                   CreateSegmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSegmentRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
