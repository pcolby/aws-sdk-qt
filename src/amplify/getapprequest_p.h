// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPREQUEST_P_H
#define QTAWS_GETAPPREQUEST_P_H

#include "amplifyrequest_p.h"
#include "getapprequest.h"

namespace QtAws {
namespace Amplify {

class GetAppRequest;

class GetAppRequestPrivate : public AmplifyRequestPrivate {

public:
    GetAppRequestPrivate(const AmplifyRequest::Action action,
                                   GetAppRequest * const q);
    GetAppRequestPrivate(const GetAppRequestPrivate &other,
                                   GetAppRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAppRequest)

};

} // namespace Amplify
} // namespace QtAws

#endif
