// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHSMREQUEST_P_H
#define QTAWS_CREATEHSMREQUEST_P_H

#include "cloudhsmv2request_p.h"
#include "createhsmrequest.h"

namespace QtAws {
namespace CloudHsmV2 {

class CreateHsmRequest;

class CreateHsmRequestPrivate : public CloudHsmV2RequestPrivate {

public:
    CreateHsmRequestPrivate(const CloudHsmV2Request::Action action,
                                   CreateHsmRequest * const q);
    CreateHsmRequestPrivate(const CreateHsmRequestPrivate &other,
                                   CreateHsmRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateHsmRequest)

};

} // namespace CloudHsmV2
} // namespace QtAws

#endif
