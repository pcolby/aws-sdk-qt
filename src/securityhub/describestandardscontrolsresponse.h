// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTANDARDSCONTROLSRESPONSE_H
#define QTAWS_DESCRIBESTANDARDSCONTROLSRESPONSE_H

#include "securityhubresponse.h"
#include "describestandardscontrolsrequest.h"

namespace QtAws {
namespace SecurityHub {

class DescribeStandardsControlsResponsePrivate;

class QTAWSSECURITYHUB_EXPORT DescribeStandardsControlsResponse : public SecurityHubResponse {
    Q_OBJECT

public:
    DescribeStandardsControlsResponse(const DescribeStandardsControlsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeStandardsControlsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStandardsControlsResponse)
    Q_DISABLE_COPY(DescribeStandardsControlsResponse)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
