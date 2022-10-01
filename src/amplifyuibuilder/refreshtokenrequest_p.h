// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REFRESHTOKENREQUEST_P_H
#define QTAWS_REFRESHTOKENREQUEST_P_H

#include "amplifyuibuilderrequest_p.h"
#include "refreshtokenrequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class RefreshTokenRequest;

class RefreshTokenRequestPrivate : public AmplifyUIBuilderRequestPrivate {

public:
    RefreshTokenRequestPrivate(const AmplifyUIBuilderRequest::Action action,
                                   RefreshTokenRequest * const q);
    RefreshTokenRequestPrivate(const RefreshTokenRequestPrivate &other,
                                   RefreshTokenRequest * const q);

private:
    Q_DECLARE_PUBLIC(RefreshTokenRequest)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
