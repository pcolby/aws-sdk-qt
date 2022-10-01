// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENVIRONMENTREQUEST_P_H
#define QTAWS_CREATEENVIRONMENTREQUEST_P_H

#include "m2request_p.h"
#include "createenvironmentrequest.h"

namespace QtAws {
namespace M2 {

class CreateEnvironmentRequest;

class CreateEnvironmentRequestPrivate : public M2RequestPrivate {

public:
    CreateEnvironmentRequestPrivate(const M2Request::Action action,
                                   CreateEnvironmentRequest * const q);
    CreateEnvironmentRequestPrivate(const CreateEnvironmentRequestPrivate &other,
                                   CreateEnvironmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateEnvironmentRequest)

};

} // namespace M2
} // namespace QtAws

#endif
