// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATASOURCEREQUEST_H
#define QTAWS_DELETEDATASOURCEREQUEST_H

#include "machinelearningrequest.h"

namespace QtAws {
namespace MachineLearning {

class DeleteDataSourceRequestPrivate;

class QTAWSMACHINELEARNING_EXPORT DeleteDataSourceRequest : public MachineLearningRequest {

public:
    DeleteDataSourceRequest(const DeleteDataSourceRequest &other);
    DeleteDataSourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDataSourceRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
