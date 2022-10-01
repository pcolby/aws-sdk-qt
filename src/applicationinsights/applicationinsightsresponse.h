// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLICATIONINSIGHTSRESPONSE_H
#define QTAWS_APPLICATIONINSIGHTSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsapplicationinsightsglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace ApplicationInsights {

class ApplicationInsightsResponsePrivate;

class QTAWSAPPLICATIONINSIGHTS_EXPORT ApplicationInsightsResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    ApplicationInsightsResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    ApplicationInsightsResponse(ApplicationInsightsResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ApplicationInsightsResponse)
    Q_DISABLE_COPY(ApplicationInsightsResponse)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
