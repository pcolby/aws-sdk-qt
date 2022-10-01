// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MONITORINSTANCESRESPONSE_H
#define QTAWS_MONITORINSTANCESRESPONSE_H

#include "ec2response.h"
#include "monitorinstancesrequest.h"

namespace QtAws {
namespace Ec2 {

class MonitorInstancesResponsePrivate;

class QTAWSEC2_EXPORT MonitorInstancesResponse : public Ec2Response {
    Q_OBJECT

public:
    MonitorInstancesResponse(const MonitorInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const MonitorInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MonitorInstancesResponse)
    Q_DISABLE_COPY(MonitorInstancesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
