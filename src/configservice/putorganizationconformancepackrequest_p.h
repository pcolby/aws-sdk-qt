// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTORGANIZATIONCONFORMANCEPACKREQUEST_P_H
#define QTAWS_PUTORGANIZATIONCONFORMANCEPACKREQUEST_P_H

#include "configservicerequest_p.h"
#include "putorganizationconformancepackrequest.h"

namespace QtAws {
namespace ConfigService {

class PutOrganizationConformancePackRequest;

class PutOrganizationConformancePackRequestPrivate : public ConfigServiceRequestPrivate {

public:
    PutOrganizationConformancePackRequestPrivate(const ConfigServiceRequest::Action action,
                                   PutOrganizationConformancePackRequest * const q);
    PutOrganizationConformancePackRequestPrivate(const PutOrganizationConformancePackRequestPrivate &other,
                                   PutOrganizationConformancePackRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutOrganizationConformancePackRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
