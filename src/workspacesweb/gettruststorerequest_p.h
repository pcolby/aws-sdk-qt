// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRUSTSTOREREQUEST_P_H
#define QTAWS_GETTRUSTSTOREREQUEST_P_H

#include "workspaceswebrequest_p.h"
#include "gettruststorerequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class GetTrustStoreRequest;

class GetTrustStoreRequestPrivate : public WorkSpacesWebRequestPrivate {

public:
    GetTrustStoreRequestPrivate(const WorkSpacesWebRequest::Action action,
                                   GetTrustStoreRequest * const q);
    GetTrustStoreRequestPrivate(const GetTrustStoreRequestPrivate &other,
                                   GetTrustStoreRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTrustStoreRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
