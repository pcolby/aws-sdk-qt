// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGURATIONRECORDERSRESPONSE_H
#define QTAWS_DESCRIBECONFIGURATIONRECORDERSRESPONSE_H

#include "configserviceresponse.h"
#include "describeconfigurationrecordersrequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeConfigurationRecordersResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribeConfigurationRecordersResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    DescribeConfigurationRecordersResponse(const DescribeConfigurationRecordersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeConfigurationRecordersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConfigurationRecordersResponse)
    Q_DISABLE_COPY(DescribeConfigurationRecordersResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
