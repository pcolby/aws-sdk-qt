// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASOURCESREQUEST_H
#define QTAWS_DESCRIBEDATASOURCESREQUEST_H

#include "machinelearningrequest.h"

namespace QtAws {
namespace MachineLearning {

class DescribeDataSourcesRequestPrivate;

class QTAWSMACHINELEARNING_EXPORT DescribeDataSourcesRequest : public MachineLearningRequest {

public:
    DescribeDataSourcesRequest(const DescribeDataSourcesRequest &other);
    DescribeDataSourcesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDataSourcesRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
