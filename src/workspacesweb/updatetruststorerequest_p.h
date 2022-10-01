// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETRUSTSTOREREQUEST_P_H
#define QTAWS_UPDATETRUSTSTOREREQUEST_P_H

#include "workspaceswebrequest_p.h"
#include "updatetruststorerequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class UpdateTrustStoreRequest;

class UpdateTrustStoreRequestPrivate : public WorkSpacesWebRequestPrivate {

public:
    UpdateTrustStoreRequestPrivate(const WorkSpacesWebRequest::Action action,
                                   UpdateTrustStoreRequest * const q);
    UpdateTrustStoreRequestPrivate(const UpdateTrustStoreRequestPrivate &other,
                                   UpdateTrustStoreRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateTrustStoreRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
