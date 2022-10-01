// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPREQUEST_P_H
#define QTAWS_CREATEAPPREQUEST_P_H

#include "amplifyrequest_p.h"
#include "createapprequest.h"

namespace QtAws {
namespace Amplify {

class CreateAppRequest;

class CreateAppRequestPrivate : public AmplifyRequestPrivate {

public:
    CreateAppRequestPrivate(const AmplifyRequest::Action action,
                                   CreateAppRequest * const q);
    CreateAppRequestPrivate(const CreateAppRequestPrivate &other,
                                   CreateAppRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAppRequest)

};

} // namespace Amplify
} // namespace QtAws

#endif
