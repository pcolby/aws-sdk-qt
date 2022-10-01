// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCOMPOSITEALARMRESPONSE_H
#define QTAWS_PUTCOMPOSITEALARMRESPONSE_H

#include "cloudwatchresponse.h"
#include "putcompositealarmrequest.h"

namespace QtAws {
namespace CloudWatch {

class PutCompositeAlarmResponsePrivate;

class QTAWSCLOUDWATCH_EXPORT PutCompositeAlarmResponse : public CloudWatchResponse {
    Q_OBJECT

public:
    PutCompositeAlarmResponse(const PutCompositeAlarmRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutCompositeAlarmRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutCompositeAlarmResponse)
    Q_DISABLE_COPY(PutCompositeAlarmResponse)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
