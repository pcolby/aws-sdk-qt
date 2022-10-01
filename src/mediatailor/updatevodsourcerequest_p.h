// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVODSOURCEREQUEST_P_H
#define QTAWS_UPDATEVODSOURCEREQUEST_P_H

#include "mediatailorrequest_p.h"
#include "updatevodsourcerequest.h"

namespace QtAws {
namespace MediaTailor {

class UpdateVodSourceRequest;

class UpdateVodSourceRequestPrivate : public MediaTailorRequestPrivate {

public:
    UpdateVodSourceRequestPrivate(const MediaTailorRequest::Action action,
                                   UpdateVodSourceRequest * const q);
    UpdateVodSourceRequestPrivate(const UpdateVodSourceRequestPrivate &other,
                                   UpdateVodSourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateVodSourceRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
