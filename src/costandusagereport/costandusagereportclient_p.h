// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COSTANDUSAGEREPORTCLIENT_P_H
#define QTAWS_COSTANDUSAGEREPORTCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace CostandUsageReport {

class CostandUsageReportClient;

class CostandUsageReportClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit CostandUsageReportClientPrivate(CostandUsageReportClient * const q);

private:
    Q_DECLARE_PUBLIC(CostandUsageReportClient)
    Q_DISABLE_COPY(CostandUsageReportClientPrivate)

};

} // namespace CostandUsageReport
} // namespace QtAws

#endif
