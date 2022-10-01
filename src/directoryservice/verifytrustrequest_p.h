// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VERIFYTRUSTREQUEST_P_H
#define QTAWS_VERIFYTRUSTREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "verifytrustrequest.h"

namespace QtAws {
namespace DirectoryService {

class VerifyTrustRequest;

class VerifyTrustRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    VerifyTrustRequestPrivate(const DirectoryServiceRequest::Action action,
                                   VerifyTrustRequest * const q);
    VerifyTrustRequestPrivate(const VerifyTrustRequestPrivate &other,
                                   VerifyTrustRequest * const q);

private:
    Q_DECLARE_PUBLIC(VerifyTrustRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
