// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATETRUSTSTOREREQUEST_P_H
#define QTAWS_DISASSOCIATETRUSTSTOREREQUEST_P_H

#include "workspaceswebrequest_p.h"
#include "disassociatetruststorerequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class DisassociateTrustStoreRequest;

class DisassociateTrustStoreRequestPrivate : public WorkSpacesWebRequestPrivate {

public:
    DisassociateTrustStoreRequestPrivate(const WorkSpacesWebRequest::Action action,
                                   DisassociateTrustStoreRequest * const q);
    DisassociateTrustStoreRequestPrivate(const DisassociateTrustStoreRequestPrivate &other,
                                   DisassociateTrustStoreRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateTrustStoreRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
