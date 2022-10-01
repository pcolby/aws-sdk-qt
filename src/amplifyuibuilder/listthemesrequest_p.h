// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHEMESREQUEST_P_H
#define QTAWS_LISTTHEMESREQUEST_P_H

#include "amplifyuibuilderrequest_p.h"
#include "listthemesrequest.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class ListThemesRequest;

class ListThemesRequestPrivate : public AmplifyUIBuilderRequestPrivate {

public:
    ListThemesRequestPrivate(const AmplifyUIBuilderRequest::Action action,
                                   ListThemesRequest * const q);
    ListThemesRequestPrivate(const ListThemesRequestPrivate &other,
                                   ListThemesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListThemesRequest)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
