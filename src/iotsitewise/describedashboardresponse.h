// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDASHBOARDRESPONSE_H
#define QTAWS_DESCRIBEDASHBOARDRESPONSE_H

#include "iotsitewiseresponse.h"
#include "describedashboardrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribeDashboardResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT DescribeDashboardResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    DescribeDashboardResponse(const DescribeDashboardRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDashboardRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDashboardResponse)
    Q_DISABLE_COPY(DescribeDashboardResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
