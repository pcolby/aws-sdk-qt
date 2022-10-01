// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASOURCEFROMREDSHIFTREQUEST_H
#define QTAWS_CREATEDATASOURCEFROMREDSHIFTREQUEST_H

#include "machinelearningrequest.h"

namespace QtAws {
namespace MachineLearning {

class CreateDataSourceFromRedshiftRequestPrivate;

class QTAWSMACHINELEARNING_EXPORT CreateDataSourceFromRedshiftRequest : public MachineLearningRequest {

public:
    CreateDataSourceFromRedshiftRequest(const CreateDataSourceFromRedshiftRequest &other);
    CreateDataSourceFromRedshiftRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDataSourceFromRedshiftRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
