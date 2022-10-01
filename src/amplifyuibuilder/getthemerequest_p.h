// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTHEMEREQUEST_P_H
#define QTAWS_GETTHEMEREQUEST_P_H

#include "amplifyuibuilderrequest_p.h"
#include "getthemerequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class GetThemeRequest;

class GetThemeRequestPrivate : public AmplifyUIBuilderRequestPrivate {

public:
    GetThemeRequestPrivate(const AmplifyUIBuilderRequest::Action action,
                                   GetThemeRequest * const q);
    GetThemeRequestPrivate(const GetThemeRequestPrivate &other,
                                   GetThemeRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetThemeRequest)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
