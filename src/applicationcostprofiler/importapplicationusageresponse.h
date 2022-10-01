// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTAPPLICATIONUSAGERESPONSE_H
#define QTAWS_IMPORTAPPLICATIONUSAGERESPONSE_H

#include "applicationcostprofilerresponse.h"
#include "importapplicationusagerequest.h"

namespace QtAws {
namespace ApplicationCostProfiler {

class ImportApplicationUsageResponsePrivate;

class QTAWSAPPLICATIONCOSTPROFILER_EXPORT ImportApplicationUsageResponse : public ApplicationCostProfilerResponse {
    Q_OBJECT

public:
    ImportApplicationUsageResponse(const ImportApplicationUsageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ImportApplicationUsageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportApplicationUsageResponse)
    Q_DISABLE_COPY(ImportApplicationUsageResponse)

};

} // namespace ApplicationCostProfiler
} // namespace QtAws

#endif
