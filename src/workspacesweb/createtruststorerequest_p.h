// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRUSTSTOREREQUEST_P_H
#define QTAWS_CREATETRUSTSTOREREQUEST_P_H

#include "workspaceswebrequest_p.h"
#include "createtruststorerequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class CreateTrustStoreRequest;

class CreateTrustStoreRequestPrivate : public WorkSpacesWebRequestPrivate {

public:
    CreateTrustStoreRequestPrivate(const WorkSpacesWebRequest::Action action,
                                   CreateTrustStoreRequest * const q);
    CreateTrustStoreRequestPrivate(const CreateTrustStoreRequestPrivate &other,
                                   CreateTrustStoreRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTrustStoreRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
