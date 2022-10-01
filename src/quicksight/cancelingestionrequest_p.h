// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELINGESTIONREQUEST_P_H
#define QTAWS_CANCELINGESTIONREQUEST_P_H

#include "quicksightrequest_p.h"
#include "cancelingestionrequest.h"

namespace QtAws {
namespace QuickSight {

class CancelIngestionRequest;

class CancelIngestionRequestPrivate : public QuickSightRequestPrivate {

public:
    CancelIngestionRequestPrivate(const QuickSightRequest::Action action,
                                   CancelIngestionRequest * const q);
    CancelIngestionRequestPrivate(const CancelIngestionRequestPrivate &other,
                                   CancelIngestionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelIngestionRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
