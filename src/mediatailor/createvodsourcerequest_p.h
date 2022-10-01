// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVODSOURCEREQUEST_P_H
#define QTAWS_CREATEVODSOURCEREQUEST_P_H

#include "mediatailorrequest_p.h"
#include "createvodsourcerequest.h"

namespace QtAws {
namespace MediaTailor {

class CreateVodSourceRequest;

class CreateVodSourceRequestPrivate : public MediaTailorRequestPrivate {

public:
    CreateVodSourceRequestPrivate(const MediaTailorRequest::Action action,
                                   CreateVodSourceRequest * const q);
    CreateVodSourceRequestPrivate(const CreateVodSourceRequestPrivate &other,
                                   CreateVodSourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateVodSourceRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
