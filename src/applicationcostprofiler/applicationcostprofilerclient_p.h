// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLICATIONCOSTPROFILERCLIENT_P_H
#define QTAWS_APPLICATIONCOSTPROFILERCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace ApplicationCostProfiler {

class ApplicationCostProfilerClient;

class ApplicationCostProfilerClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit ApplicationCostProfilerClientPrivate(ApplicationCostProfilerClient * const q);

private:
    Q_DECLARE_PUBLIC(ApplicationCostProfilerClient)
    Q_DISABLE_COPY(ApplicationCostProfilerClientPrivate)

};

} // namespace ApplicationCostProfiler
} // namespace QtAws

#endif
