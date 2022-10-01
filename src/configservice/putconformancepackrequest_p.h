// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFORMANCEPACKREQUEST_P_H
#define QTAWS_PUTCONFORMANCEPACKREQUEST_P_H

#include "configservicerequest_p.h"
#include "putconformancepackrequest.h"

namespace QtAws {
namespace ConfigService {

class PutConformancePackRequest;

class PutConformancePackRequestPrivate : public ConfigServiceRequestPrivate {

public:
    PutConformancePackRequestPrivate(const ConfigServiceRequest::Action action,
                                   PutConformancePackRequest * const q);
    PutConformancePackRequestPrivate(const PutConformancePackRequestPrivate &other,
                                   PutConformancePackRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutConformancePackRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
