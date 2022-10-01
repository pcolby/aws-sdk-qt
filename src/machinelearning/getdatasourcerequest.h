// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATASOURCEREQUEST_H
#define QTAWS_GETDATASOURCEREQUEST_H

#include "machinelearningrequest.h"

namespace QtAws {
namespace MachineLearning {

class GetDataSourceRequestPrivate;

class QTAWSMACHINELEARNING_EXPORT GetDataSourceRequest : public MachineLearningRequest {

public:
    GetDataSourceRequest(const GetDataSourceRequest &other);
    GetDataSourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDataSourceRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
