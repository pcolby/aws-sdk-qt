// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMEDIAPIPELINESREQUEST_P_H
#define QTAWS_LISTMEDIAPIPELINESREQUEST_P_H

#include "chimesdkmediapipelinesrequest_p.h"
#include "listmediapipelinesrequest.h"

namespace QtAws {
namespace ChimeSdkMediaPipelines {

class ListMediaPipelinesRequest;

class ListMediaPipelinesRequestPrivate : public ChimeSdkMediaPipelinesRequestPrivate {

public:
    ListMediaPipelinesRequestPrivate(const ChimeSdkMediaPipelinesRequest::Action action,
                                   ListMediaPipelinesRequest * const q);
    ListMediaPipelinesRequestPrivate(const ListMediaPipelinesRequestPrivate &other,
                                   ListMediaPipelinesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListMediaPipelinesRequest)

};

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws

#endif
