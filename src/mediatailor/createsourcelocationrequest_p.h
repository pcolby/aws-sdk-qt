// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESOURCELOCATIONREQUEST_P_H
#define QTAWS_CREATESOURCELOCATIONREQUEST_P_H

#include "mediatailorrequest_p.h"
#include "createsourcelocationrequest.h"

namespace QtAws {
namespace MediaTailor {

class CreateSourceLocationRequest;

class CreateSourceLocationRequestPrivate : public MediaTailorRequestPrivate {

public:
    CreateSourceLocationRequestPrivate(const MediaTailorRequest::Action action,
                                   CreateSourceLocationRequest * const q);
    CreateSourceLocationRequestPrivate(const CreateSourceLocationRequestPrivate &other,
                                   CreateSourceLocationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSourceLocationRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
