// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHSMREQUEST_P_H
#define QTAWS_CREATEHSMREQUEST_P_H

#include "cloudhsmrequest_p.h"
#include "createhsmrequest.h"

namespace QtAws {
namespace CloudHsm {

class CreateHsmRequest;

class CreateHsmRequestPrivate : public CloudHsmRequestPrivate {

public:
    CreateHsmRequestPrivate(const CloudHsmRequest::Action action,
                                   CreateHsmRequest * const q);
    CreateHsmRequestPrivate(const CreateHsmRequestPrivate &other,
                                   CreateHsmRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateHsmRequest)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
