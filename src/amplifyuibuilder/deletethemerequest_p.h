// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETHEMEREQUEST_P_H
#define QTAWS_DELETETHEMEREQUEST_P_H

#include "amplifyuibuilderrequest_p.h"
#include "deletethemerequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class DeleteThemeRequest;

class DeleteThemeRequestPrivate : public AmplifyUIBuilderRequestPrivate {

public:
    DeleteThemeRequestPrivate(const AmplifyUIBuilderRequest::Action action,
                                   DeleteThemeRequest * const q);
    DeleteThemeRequestPrivate(const DeleteThemeRequestPrivate &other,
                                   DeleteThemeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteThemeRequest)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
