// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTSOURCESCONFIGRESPONSE_H
#define QTAWS_DESCRIBEEVENTSOURCESCONFIGRESPONSE_H

#include "devopsgururesponse.h"
#include "describeeventsourcesconfigrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class DescribeEventSourcesConfigResponsePrivate;

class QTAWSDEVOPSGURU_EXPORT DescribeEventSourcesConfigResponse : public DevOpsGuruResponse {
    Q_OBJECT

public:
    DescribeEventSourcesConfigResponse(const DescribeEventSourcesConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEventSourcesConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEventSourcesConfigResponse)
    Q_DISABLE_COPY(DescribeEventSourcesConfigResponse)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
