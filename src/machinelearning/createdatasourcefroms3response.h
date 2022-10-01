// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASOURCEFROMS3RESPONSE_H
#define QTAWS_CREATEDATASOURCEFROMS3RESPONSE_H

#include "machinelearningresponse.h"
#include "createdatasourcefroms3request.h"

namespace QtAws {
namespace MachineLearning {

class CreateDataSourceFromS3ResponsePrivate;

class QTAWSMACHINELEARNING_EXPORT CreateDataSourceFromS3Response : public MachineLearningResponse {
    Q_OBJECT

public:
    CreateDataSourceFromS3Response(const CreateDataSourceFromS3Request &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDataSourceFromS3Request * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDataSourceFromS3Response)
    Q_DISABLE_COPY(CreateDataSourceFromS3Response)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
