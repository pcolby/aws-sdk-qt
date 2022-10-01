// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTAPPLICATIONUSAGEREQUEST_H
#define QTAWS_IMPORTAPPLICATIONUSAGEREQUEST_H

#include "applicationcostprofilerrequest.h"

namespace QtAws {
namespace ApplicationCostProfiler {

class ImportApplicationUsageRequestPrivate;

class QTAWSAPPLICATIONCOSTPROFILER_EXPORT ImportApplicationUsageRequest : public ApplicationCostProfilerRequest {

public:
    ImportApplicationUsageRequest(const ImportApplicationUsageRequest &other);
    ImportApplicationUsageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportApplicationUsageRequest)

};

} // namespace ApplicationCostProfiler
} // namespace QtAws

#endif
