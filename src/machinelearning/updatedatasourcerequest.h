// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATASOURCEREQUEST_H
#define QTAWS_UPDATEDATASOURCEREQUEST_H

#include "machinelearningrequest.h"

namespace QtAws {
namespace MachineLearning {

class UpdateDataSourceRequestPrivate;

class QTAWSMACHINELEARNING_EXPORT UpdateDataSourceRequest : public MachineLearningRequest {

public:
    UpdateDataSourceRequest(const UpdateDataSourceRequest &other);
    UpdateDataSourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDataSourceRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
