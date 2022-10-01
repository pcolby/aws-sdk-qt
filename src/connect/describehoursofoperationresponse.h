// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHOURSOFOPERATIONRESPONSE_H
#define QTAWS_DESCRIBEHOURSOFOPERATIONRESPONSE_H

#include "connectresponse.h"
#include "describehoursofoperationrequest.h"

namespace QtAws {
namespace Connect {

class DescribeHoursOfOperationResponsePrivate;

class QTAWSCONNECT_EXPORT DescribeHoursOfOperationResponse : public ConnectResponse {
    Q_OBJECT

public:
    DescribeHoursOfOperationResponse(const DescribeHoursOfOperationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeHoursOfOperationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeHoursOfOperationResponse)
    Q_DISABLE_COPY(DescribeHoursOfOperationResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
