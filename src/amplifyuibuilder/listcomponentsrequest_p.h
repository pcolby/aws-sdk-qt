// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPONENTSREQUEST_P_H
#define QTAWS_LISTCOMPONENTSREQUEST_P_H

#include "amplifyuibuilderrequest_p.h"
#include "listcomponentsrequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class ListComponentsRequest;

class ListComponentsRequestPrivate : public AmplifyUIBuilderRequestPrivate {

public:
    ListComponentsRequestPrivate(const AmplifyUIBuilderRequest::Action action,
                                   ListComponentsRequest * const q);
    ListComponentsRequestPrivate(const ListComponentsRequestPrivate &other,
                                   ListComponentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListComponentsRequest)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
