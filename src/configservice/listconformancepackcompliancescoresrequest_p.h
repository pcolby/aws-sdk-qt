// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONFORMANCEPACKCOMPLIANCESCORESREQUEST_P_H
#define QTAWS_LISTCONFORMANCEPACKCOMPLIANCESCORESREQUEST_P_H

#include "configservicerequest_p.h"
#include "listconformancepackcompliancescoresrequest.h"

namespace QtAws {
namespace ConfigService {

class ListConformancePackComplianceScoresRequest;

class ListConformancePackComplianceScoresRequestPrivate : public ConfigServiceRequestPrivate {

public:
    ListConformancePackComplianceScoresRequestPrivate(const ConfigServiceRequest::Action action,
                                   ListConformancePackComplianceScoresRequest * const q);
    ListConformancePackComplianceScoresRequestPrivate(const ListConformancePackComplianceScoresRequestPrivate &other,
                                   ListConformancePackComplianceScoresRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListConformancePackComplianceScoresRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
