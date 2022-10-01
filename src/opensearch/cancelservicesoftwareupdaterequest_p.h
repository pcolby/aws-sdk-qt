// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELSERVICESOFTWAREUPDATEREQUEST_P_H
#define QTAWS_CANCELSERVICESOFTWAREUPDATEREQUEST_P_H

#include "opensearchrequest_p.h"
#include "cancelservicesoftwareupdaterequest.h"

namespace QtAws {
namespace OpenSearch {

class CancelServiceSoftwareUpdateRequest;

class CancelServiceSoftwareUpdateRequestPrivate : public OpenSearchRequestPrivate {

public:
    CancelServiceSoftwareUpdateRequestPrivate(const OpenSearchRequest::Action action,
                                   CancelServiceSoftwareUpdateRequest * const q);
    CancelServiceSoftwareUpdateRequestPrivate(const CancelServiceSoftwareUpdateRequestPrivate &other,
                                   CancelServiceSoftwareUpdateRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelServiceSoftwareUpdateRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
