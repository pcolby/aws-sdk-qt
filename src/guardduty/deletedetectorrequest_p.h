// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDETECTORREQUEST_P_H
#define QTAWS_DELETEDETECTORREQUEST_P_H

#include "guarddutyrequest_p.h"
#include "deletedetectorrequest.h"

namespace QtAws {
namespace GuardDuty {

class DeleteDetectorRequest;

class DeleteDetectorRequestPrivate : public GuardDutyRequestPrivate {

public:
    DeleteDetectorRequestPrivate(const GuardDutyRequest::Action action,
                                   DeleteDetectorRequest * const q);
    DeleteDetectorRequestPrivate(const DeleteDetectorRequestPrivate &other,
                                   DeleteDetectorRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDetectorRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
