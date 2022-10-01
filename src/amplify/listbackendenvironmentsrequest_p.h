// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBACKENDENVIRONMENTSREQUEST_P_H
#define QTAWS_LISTBACKENDENVIRONMENTSREQUEST_P_H

#include "amplifyrequest_p.h"
#include "listbackendenvironmentsrequest.h"

namespace QtAws {
namespace Amplify {

class ListBackendEnvironmentsRequest;

class ListBackendEnvironmentsRequestPrivate : public AmplifyRequestPrivate {

public:
    ListBackendEnvironmentsRequestPrivate(const AmplifyRequest::Action action,
                                   ListBackendEnvironmentsRequest * const q);
    ListBackendEnvironmentsRequestPrivate(const ListBackendEnvironmentsRequestPrivate &other,
                                   ListBackendEnvironmentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListBackendEnvironmentsRequest)

};

} // namespace Amplify
} // namespace QtAws

#endif
