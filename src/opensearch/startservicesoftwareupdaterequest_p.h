// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSERVICESOFTWAREUPDATEREQUEST_P_H
#define QTAWS_STARTSERVICESOFTWAREUPDATEREQUEST_P_H

#include "opensearchrequest_p.h"
#include "startservicesoftwareupdaterequest.h"

namespace QtAws {
namespace OpenSearch {

class StartServiceSoftwareUpdateRequest;

class StartServiceSoftwareUpdateRequestPrivate : public OpenSearchRequestPrivate {

public:
    StartServiceSoftwareUpdateRequestPrivate(const OpenSearchRequest::Action action,
                                   StartServiceSoftwareUpdateRequest * const q);
    StartServiceSoftwareUpdateRequestPrivate(const StartServiceSoftwareUpdateRequestPrivate &other,
                                   StartServiceSoftwareUpdateRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartServiceSoftwareUpdateRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
