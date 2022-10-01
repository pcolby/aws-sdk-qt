// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRUSTSTORESREQUEST_P_H
#define QTAWS_LISTTRUSTSTORESREQUEST_P_H

#include "workspaceswebrequest_p.h"
#include "listtruststoresrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class ListTrustStoresRequest;

class ListTrustStoresRequestPrivate : public WorkSpacesWebRequestPrivate {

public:
    ListTrustStoresRequestPrivate(const WorkSpacesWebRequest::Action action,
                                   ListTrustStoresRequest * const q);
    ListTrustStoresRequestPrivate(const ListTrustStoresRequestPrivate &other,
                                   ListTrustStoresRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTrustStoresRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
