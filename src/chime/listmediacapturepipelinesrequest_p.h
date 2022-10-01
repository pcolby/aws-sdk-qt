// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMEDIACAPTUREPIPELINESREQUEST_P_H
#define QTAWS_LISTMEDIACAPTUREPIPELINESREQUEST_P_H

#include "chimerequest_p.h"
#include "listmediacapturepipelinesrequest.h"

namespace QtAws {
namespace Chime {

class ListMediaCapturePipelinesRequest;

class ListMediaCapturePipelinesRequestPrivate : public ChimeRequestPrivate {

public:
    ListMediaCapturePipelinesRequestPrivate(const ChimeRequest::Action action,
                                   ListMediaCapturePipelinesRequest * const q);
    ListMediaCapturePipelinesRequestPrivate(const ListMediaCapturePipelinesRequestPrivate &other,
                                   ListMediaCapturePipelinesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListMediaCapturePipelinesRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
