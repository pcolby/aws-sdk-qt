// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREGIONSRESPONSE_H
#define QTAWS_DESCRIBEREGIONSRESPONSE_H

#include "directoryserviceresponse.h"
#include "describeregionsrequest.h"

namespace QtAws {
namespace DirectoryService {

class DescribeRegionsResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT DescribeRegionsResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    DescribeRegionsResponse(const DescribeRegionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeRegionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRegionsResponse)
    Q_DISABLE_COPY(DescribeRegionsResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
