// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOPERATIONSREQUEST_P_H
#define QTAWS_LISTOPERATIONSREQUEST_P_H

#include "apprunnerrequest_p.h"
#include "listoperationsrequest.h"

namespace QtAws {
namespace AppRunner {

class ListOperationsRequest;

class ListOperationsRequestPrivate : public AppRunnerRequestPrivate {

public:
    ListOperationsRequestPrivate(const AppRunnerRequest::Action action,
                                   ListOperationsRequest * const q);
    ListOperationsRequestPrivate(const ListOperationsRequestPrivate &other,
                                   ListOperationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListOperationsRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif
