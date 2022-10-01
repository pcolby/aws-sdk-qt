// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDRAFTAPPVERSIONRESOURCESIMPORTSTATUSREQUEST_P_H
#define QTAWS_DESCRIBEDRAFTAPPVERSIONRESOURCESIMPORTSTATUSREQUEST_P_H

#include "resiliencehubrequest_p.h"
#include "describedraftappversionresourcesimportstatusrequest.h"

namespace QtAws {
namespace ResilienceHub {

class DescribeDraftAppVersionResourcesImportStatusRequest;

class DescribeDraftAppVersionResourcesImportStatusRequestPrivate : public ResilienceHubRequestPrivate {

public:
    DescribeDraftAppVersionResourcesImportStatusRequestPrivate(const ResilienceHubRequest::Action action,
                                   DescribeDraftAppVersionResourcesImportStatusRequest * const q);
    DescribeDraftAppVersionResourcesImportStatusRequestPrivate(const DescribeDraftAppVersionResourcesImportStatusRequestPrivate &other,
                                   DescribeDraftAppVersionResourcesImportStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDraftAppVersionResourcesImportStatusRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
