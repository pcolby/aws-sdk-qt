// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESEGMENTREQUEST_P_H
#define QTAWS_DELETESEGMENTREQUEST_P_H

#include "evidentlyrequest_p.h"
#include "deletesegmentrequest.h"

namespace QtAws {
namespace Evidently {

class DeleteSegmentRequest;

class DeleteSegmentRequestPrivate : public EvidentlyRequestPrivate {

public:
    DeleteSegmentRequestPrivate(const EvidentlyRequest::Action action,
                                   DeleteSegmentRequest * const q);
    DeleteSegmentRequestPrivate(const DeleteSegmentRequestPrivate &other,
                                   DeleteSegmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSegmentRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
