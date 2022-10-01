// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFORMREQUEST_P_H
#define QTAWS_CREATEFORMREQUEST_P_H

#include "amplifyuibuilderrequest_p.h"
#include "createformrequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class CreateFormRequest;

class CreateFormRequestPrivate : public AmplifyUIBuilderRequestPrivate {

public:
    CreateFormRequestPrivate(const AmplifyUIBuilderRequest::Action action,
                                   CreateFormRequest * const q);
    CreateFormRequestPrivate(const CreateFormRequestPrivate &other,
                                   CreateFormRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateFormRequest)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
