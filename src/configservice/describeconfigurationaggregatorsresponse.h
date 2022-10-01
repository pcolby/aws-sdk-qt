// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGURATIONAGGREGATORSRESPONSE_H
#define QTAWS_DESCRIBECONFIGURATIONAGGREGATORSRESPONSE_H

#include "configserviceresponse.h"
#include "describeconfigurationaggregatorsrequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeConfigurationAggregatorsResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribeConfigurationAggregatorsResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    DescribeConfigurationAggregatorsResponse(const DescribeConfigurationAggregatorsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeConfigurationAggregatorsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConfigurationAggregatorsResponse)
    Q_DISABLE_COPY(DescribeConfigurationAggregatorsResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
