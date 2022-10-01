// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINGESTIONREQUEST_P_H
#define QTAWS_CREATEINGESTIONREQUEST_P_H

#include "quicksightrequest_p.h"
#include "createingestionrequest.h"

namespace QtAws {
namespace QuickSight {

class CreateIngestionRequest;

class CreateIngestionRequestPrivate : public QuickSightRequestPrivate {

public:
    CreateIngestionRequestPrivate(const QuickSightRequest::Action action,
                                   CreateIngestionRequest * const q);
    CreateIngestionRequestPrivate(const CreateIngestionRequestPrivate &other,
                                   CreateIngestionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateIngestionRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
