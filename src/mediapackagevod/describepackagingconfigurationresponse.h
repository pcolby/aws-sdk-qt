// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPACKAGINGCONFIGURATIONRESPONSE_H
#define QTAWS_DESCRIBEPACKAGINGCONFIGURATIONRESPONSE_H

#include "mediapackagevodresponse.h"
#include "describepackagingconfigurationrequest.h"

namespace QtAws {
namespace MediaPackageVod {

class DescribePackagingConfigurationResponsePrivate;

class QTAWSMEDIAPACKAGEVOD_EXPORT DescribePackagingConfigurationResponse : public MediaPackageVodResponse {
    Q_OBJECT

public:
    DescribePackagingConfigurationResponse(const DescribePackagingConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePackagingConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePackagingConfigurationResponse)
    Q_DISABLE_COPY(DescribePackagingConfigurationResponse)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
