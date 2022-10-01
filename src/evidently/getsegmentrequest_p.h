// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSEGMENTREQUEST_P_H
#define QTAWS_GETSEGMENTREQUEST_P_H

#include "evidentlyrequest_p.h"
#include "getsegmentrequest.h"

namespace QtAws {
namespace Evidently {

class GetSegmentRequest;

class GetSegmentRequestPrivate : public EvidentlyRequestPrivate {

public:
    GetSegmentRequestPrivate(const EvidentlyRequest::Action action,
                                   GetSegmentRequest * const q);
    GetSegmentRequestPrivate(const GetSegmentRequestPrivate &other,
                                   GetSegmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSegmentRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
