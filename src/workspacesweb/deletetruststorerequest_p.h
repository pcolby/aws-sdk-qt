// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRUSTSTOREREQUEST_P_H
#define QTAWS_DELETETRUSTSTOREREQUEST_P_H

#include "workspaceswebrequest_p.h"
#include "deletetruststorerequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class DeleteTrustStoreRequest;

class DeleteTrustStoreRequestPrivate : public WorkSpacesWebRequestPrivate {

public:
    DeleteTrustStoreRequestPrivate(const WorkSpacesWebRequest::Action action,
                                   DeleteTrustStoreRequest * const q);
    DeleteTrustStoreRequestPrivate(const DeleteTrustStoreRequestPrivate &other,
                                   DeleteTrustStoreRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTrustStoreRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
