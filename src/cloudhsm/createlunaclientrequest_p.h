// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELUNACLIENTREQUEST_P_H
#define QTAWS_CREATELUNACLIENTREQUEST_P_H

#include "cloudhsmrequest_p.h"
#include "createlunaclientrequest.h"

namespace QtAws {
namespace CloudHsm {

class CreateLunaClientRequest;

class CreateLunaClientRequestPrivate : public CloudHsmRequestPrivate {

public:
    CreateLunaClientRequestPrivate(const CloudHsmRequest::Action action,
                                   CreateLunaClientRequest * const q);
    CreateLunaClientRequestPrivate(const CreateLunaClientRequestPrivate &other,
                                   CreateLunaClientRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLunaClientRequest)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
