// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRUSTREQUEST_P_H
#define QTAWS_DELETETRUSTREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "deletetrustrequest.h"

namespace QtAws {
namespace DirectoryService {

class DeleteTrustRequest;

class DeleteTrustRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    DeleteTrustRequestPrivate(const DirectoryServiceRequest::Action action,
                                   DeleteTrustRequest * const q);
    DeleteTrustRequestPrivate(const DeleteTrustRequestPrivate &other,
                                   DeleteTrustRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTrustRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
