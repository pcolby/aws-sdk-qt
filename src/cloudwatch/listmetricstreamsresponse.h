// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMETRICSTREAMSRESPONSE_H
#define QTAWS_LISTMETRICSTREAMSRESPONSE_H

#include "cloudwatchresponse.h"
#include "listmetricstreamsrequest.h"

namespace QtAws {
namespace CloudWatch {

class ListMetricStreamsResponsePrivate;

class QTAWSCLOUDWATCH_EXPORT ListMetricStreamsResponse : public CloudWatchResponse {
    Q_OBJECT

public:
    ListMetricStreamsResponse(const ListMetricStreamsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListMetricStreamsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMetricStreamsResponse)
    Q_DISABLE_COPY(ListMetricStreamsResponse)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
