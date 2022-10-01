// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELIVESOURCEREQUEST_P_H
#define QTAWS_DELETELIVESOURCEREQUEST_P_H

#include "mediatailorrequest_p.h"
#include "deletelivesourcerequest.h"

namespace QtAws {
namespace MediaTailor {

class DeleteLiveSourceRequest;

class DeleteLiveSourceRequestPrivate : public MediaTailorRequestPrivate {

public:
    DeleteLiveSourceRequestPrivate(const MediaTailorRequest::Action action,
                                   DeleteLiveSourceRequest * const q);
    DeleteLiveSourceRequestPrivate(const DeleteLiveSourceRequestPrivate &other,
                                   DeleteLiveSourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteLiveSourceRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
