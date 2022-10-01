// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFORMSREQUEST_P_H
#define QTAWS_LISTFORMSREQUEST_P_H

#include "amplifyuibuilderrequest_p.h"
#include "listformsrequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class ListFormsRequest;

class ListFormsRequestPrivate : public AmplifyUIBuilderRequestPrivate {

public:
    ListFormsRequestPrivate(const AmplifyUIBuilderRequest::Action action,
                                   ListFormsRequest * const q);
    ListFormsRequestPrivate(const ListFormsRequestPrivate &other,
                                   ListFormsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFormsRequest)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
