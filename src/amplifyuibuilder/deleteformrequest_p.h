// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFORMREQUEST_P_H
#define QTAWS_DELETEFORMREQUEST_P_H

#include "amplifyuibuilderrequest_p.h"
#include "deleteformrequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class DeleteFormRequest;

class DeleteFormRequestPrivate : public AmplifyUIBuilderRequestPrivate {

public:
    DeleteFormRequestPrivate(const AmplifyUIBuilderRequest::Action action,
                                   DeleteFormRequest * const q);
    DeleteFormRequestPrivate(const DeleteFormRequestPrivate &other,
                                   DeleteFormRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFormRequest)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
