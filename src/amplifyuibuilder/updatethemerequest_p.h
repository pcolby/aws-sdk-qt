// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETHEMEREQUEST_P_H
#define QTAWS_UPDATETHEMEREQUEST_P_H

#include "amplifyuibuilderrequest_p.h"
#include "updatethemerequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class UpdateThemeRequest;

class UpdateThemeRequestPrivate : public AmplifyUIBuilderRequestPrivate {

public:
    UpdateThemeRequestPrivate(const AmplifyUIBuilderRequest::Action action,
                                   UpdateThemeRequest * const q);
    UpdateThemeRequestPrivate(const UpdateThemeRequestPrivate &other,
                                   UpdateThemeRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateThemeRequest)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
