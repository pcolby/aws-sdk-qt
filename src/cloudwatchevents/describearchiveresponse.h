// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEARCHIVERESPONSE_H
#define QTAWS_DESCRIBEARCHIVERESPONSE_H

#include "cloudwatcheventsresponse.h"
#include "describearchiverequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class DescribeArchiveResponsePrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT DescribeArchiveResponse : public CloudWatchEventsResponse {
    Q_OBJECT

public:
    DescribeArchiveResponse(const DescribeArchiveRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeArchiveRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeArchiveResponse)
    Q_DISABLE_COPY(DescribeArchiveResponse)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
