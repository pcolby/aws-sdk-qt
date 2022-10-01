// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETHEMEREQUEST_P_H
#define QTAWS_CREATETHEMEREQUEST_P_H

#include "amplifyuibuilderrequest_p.h"
#include "createthemerequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class CreateThemeRequest;

class CreateThemeRequestPrivate : public AmplifyUIBuilderRequestPrivate {

public:
    CreateThemeRequestPrivate(const AmplifyUIBuilderRequest::Action action,
                                   CreateThemeRequest * const q);
    CreateThemeRequestPrivate(const CreateThemeRequestPrivate &other,
                                   CreateThemeRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateThemeRequest)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
