// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTANDARDSRESPONSE_H
#define QTAWS_DESCRIBESTANDARDSRESPONSE_H

#include "securityhubresponse.h"
#include "describestandardsrequest.h"

namespace QtAws {
namespace SecurityHub {

class DescribeStandardsResponsePrivate;

class QTAWSSECURITYHUB_EXPORT DescribeStandardsResponse : public SecurityHubResponse {
    Q_OBJECT

public:
    DescribeStandardsResponse(const DescribeStandardsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeStandardsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStandardsResponse)
    Q_DISABLE_COPY(DescribeStandardsResponse)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
