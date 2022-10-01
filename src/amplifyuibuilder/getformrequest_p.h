// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFORMREQUEST_P_H
#define QTAWS_GETFORMREQUEST_P_H

#include "amplifyuibuilderrequest_p.h"
#include "getformrequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class GetFormRequest;

class GetFormRequestPrivate : public AmplifyUIBuilderRequestPrivate {

public:
    GetFormRequestPrivate(const AmplifyUIBuilderRequest::Action action,
                                   GetFormRequest * const q);
    GetFormRequestPrivate(const GetFormRequestPrivate &other,
                                   GetFormRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFormRequest)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
