// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMLMODELSRESPONSE_H
#define QTAWS_DESCRIBEMLMODELSRESPONSE_H

#include "machinelearningresponse.h"
#include "describemlmodelsrequest.h"

namespace QtAws {
namespace MachineLearning {

class DescribeMLModelsResponsePrivate;

class QTAWSMACHINELEARNING_EXPORT DescribeMLModelsResponse : public MachineLearningResponse {
    Q_OBJECT

public:
    DescribeMLModelsResponse(const DescribeMLModelsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeMLModelsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMLModelsResponse)
    Q_DISABLE_COPY(DescribeMLModelsResponse)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
