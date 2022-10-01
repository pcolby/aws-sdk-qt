// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESOURCELOCATIONREQUEST_P_H
#define QTAWS_UPDATESOURCELOCATIONREQUEST_P_H

#include "mediatailorrequest_p.h"
#include "updatesourcelocationrequest.h"

namespace QtAws {
namespace MediaTailor {

class UpdateSourceLocationRequest;

class UpdateSourceLocationRequestPrivate : public MediaTailorRequestPrivate {

public:
    UpdateSourceLocationRequestPrivate(const MediaTailorRequest::Action action,
                                   UpdateSourceLocationRequest * const q);
    UpdateSourceLocationRequestPrivate(const UpdateSourceLocationRequestPrivate &other,
                                   UpdateSourceLocationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSourceLocationRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
