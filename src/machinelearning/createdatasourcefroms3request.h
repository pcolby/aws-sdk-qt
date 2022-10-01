// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASOURCEFROMS3REQUEST_H
#define QTAWS_CREATEDATASOURCEFROMS3REQUEST_H

#include "machinelearningrequest.h"

namespace QtAws {
namespace MachineLearning {

class CreateDataSourceFromS3RequestPrivate;

class QTAWSMACHINELEARNING_EXPORT CreateDataSourceFromS3Request : public MachineLearningRequest {

public:
    CreateDataSourceFromS3Request(const CreateDataSourceFromS3Request &other);
    CreateDataSourceFromS3Request();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDataSourceFromS3Request)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
