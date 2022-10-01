// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASOURCEFROMS3REQUEST_P_H
#define QTAWS_CREATEDATASOURCEFROMS3REQUEST_P_H

#include "machinelearningrequest_p.h"
#include "createdatasourcefroms3request.h"

namespace QtAws {
namespace MachineLearning {

class CreateDataSourceFromS3Request;

class CreateDataSourceFromS3RequestPrivate : public MachineLearningRequestPrivate {

public:
    CreateDataSourceFromS3RequestPrivate(const MachineLearningRequest::Action action,
                                   CreateDataSourceFromS3Request * const q);
    CreateDataSourceFromS3RequestPrivate(const CreateDataSourceFromS3RequestPrivate &other,
                                   CreateDataSourceFromS3Request * const q);

private:
    Q_DECLARE_PUBLIC(CreateDataSourceFromS3Request)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
