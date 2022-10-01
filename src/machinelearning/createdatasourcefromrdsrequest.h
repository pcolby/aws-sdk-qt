// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASOURCEFROMRDSREQUEST_H
#define QTAWS_CREATEDATASOURCEFROMRDSREQUEST_H

#include "machinelearningrequest.h"

namespace QtAws {
namespace MachineLearning {

class CreateDataSourceFromRDSRequestPrivate;

class QTAWSMACHINELEARNING_EXPORT CreateDataSourceFromRDSRequest : public MachineLearningRequest {

public:
    CreateDataSourceFromRDSRequest(const CreateDataSourceFromRDSRequest &other);
    CreateDataSourceFromRDSRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDataSourceFromRDSRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
