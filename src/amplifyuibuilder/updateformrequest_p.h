// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFORMREQUEST_P_H
#define QTAWS_UPDATEFORMREQUEST_P_H

#include "amplifyuibuilderrequest_p.h"
#include "updateformrequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class UpdateFormRequest;

class UpdateFormRequestPrivate : public AmplifyUIBuilderRequestPrivate {

public:
    UpdateFormRequestPrivate(const AmplifyUIBuilderRequest::Action action,
                                   UpdateFormRequest * const q);
    UpdateFormRequestPrivate(const UpdateFormRequestPrivate &other,
                                   UpdateFormRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFormRequest)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
