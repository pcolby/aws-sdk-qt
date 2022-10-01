// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELIVESOURCEREQUEST_P_H
#define QTAWS_UPDATELIVESOURCEREQUEST_P_H

#include "mediatailorrequest_p.h"
#include "updatelivesourcerequest.h"

namespace QtAws {
namespace MediaTailor {

class UpdateLiveSourceRequest;

class UpdateLiveSourceRequestPrivate : public MediaTailorRequestPrivate {

public:
    UpdateLiveSourceRequestPrivate(const MediaTailorRequest::Action action,
                                   UpdateLiveSourceRequest * const q);
    UpdateLiveSourceRequestPrivate(const UpdateLiveSourceRequestPrivate &other,
                                   UpdateLiveSourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateLiveSourceRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
