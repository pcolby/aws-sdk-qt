// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REPORTINSTANCESTATUSRESPONSE_H
#define QTAWS_REPORTINSTANCESTATUSRESPONSE_H

#include "ec2response.h"
#include "reportinstancestatusrequest.h"

namespace QtAws {
namespace Ec2 {

class ReportInstanceStatusResponsePrivate;

class QTAWSEC2_EXPORT ReportInstanceStatusResponse : public Ec2Response {
    Q_OBJECT

public:
    ReportInstanceStatusResponse(const ReportInstanceStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ReportInstanceStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReportInstanceStatusResponse)
    Q_DISABLE_COPY(ReportInstanceStatusResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
