// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXCHANGECODEFORTOKENREQUEST_P_H
#define QTAWS_EXCHANGECODEFORTOKENREQUEST_P_H

#include "amplifyuibuilderrequest_p.h"
#include "exchangecodefortokenrequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class ExchangeCodeForTokenRequest;

class ExchangeCodeForTokenRequestPrivate : public AmplifyUIBuilderRequestPrivate {

public:
    ExchangeCodeForTokenRequestPrivate(const AmplifyUIBuilderRequest::Action action,
                                   ExchangeCodeForTokenRequest * const q);
    ExchangeCodeForTokenRequestPrivate(const ExchangeCodeForTokenRequestPrivate &other,
                                   ExchangeCodeForTokenRequest * const q);

private:
    Q_DECLARE_PUBLIC(ExchangeCodeForTokenRequest)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
