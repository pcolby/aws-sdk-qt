// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTORAGECONFIGURATIONRESPONSE_H
#define QTAWS_DESCRIBESTORAGECONFIGURATIONRESPONSE_H

#include "iotsitewiseresponse.h"
#include "describestorageconfigurationrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribeStorageConfigurationResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT DescribeStorageConfigurationResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    DescribeStorageConfigurationResponse(const DescribeStorageConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeStorageConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStorageConfigurationResponse)
    Q_DISABLE_COPY(DescribeStorageConfigurationResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
