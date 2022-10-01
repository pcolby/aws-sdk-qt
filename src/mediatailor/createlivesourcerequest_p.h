// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELIVESOURCEREQUEST_P_H
#define QTAWS_CREATELIVESOURCEREQUEST_P_H

#include "mediatailorrequest_p.h"
#include "createlivesourcerequest.h"

namespace QtAws {
namespace MediaTailor {

class CreateLiveSourceRequest;

class CreateLiveSourceRequestPrivate : public MediaTailorRequestPrivate {

public:
    CreateLiveSourceRequestPrivate(const MediaTailorRequest::Action action,
                                   CreateLiveSourceRequest * const q);
    CreateLiveSourceRequestPrivate(const CreateLiveSourceRequestPrivate &other,
                                   CreateLiveSourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLiveSourceRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
