// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETRUSTSTOREREQUEST_P_H
#define QTAWS_ASSOCIATETRUSTSTOREREQUEST_P_H

#include "workspaceswebrequest_p.h"
#include "associatetruststorerequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class AssociateTrustStoreRequest;

class AssociateTrustStoreRequestPrivate : public WorkSpacesWebRequestPrivate {

public:
    AssociateTrustStoreRequestPrivate(const WorkSpacesWebRequest::Action action,
                                   AssociateTrustStoreRequest * const q);
    AssociateTrustStoreRequestPrivate(const AssociateTrustStoreRequestPrivate &other,
                                   AssociateTrustStoreRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateTrustStoreRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
