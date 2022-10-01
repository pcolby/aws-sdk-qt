// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASOURCESRESPONSE_H
#define QTAWS_DESCRIBEDATASOURCESRESPONSE_H

#include "machinelearningresponse.h"
#include "describedatasourcesrequest.h"

namespace QtAws {
namespace MachineLearning {

class DescribeDataSourcesResponsePrivate;

class QTAWSMACHINELEARNING_EXPORT DescribeDataSourcesResponse : public MachineLearningResponse {
    Q_OBJECT

public:
    DescribeDataSourcesResponse(const DescribeDataSourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDataSourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDataSourcesResponse)
    Q_DISABLE_COPY(DescribeDataSourcesResponse)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
