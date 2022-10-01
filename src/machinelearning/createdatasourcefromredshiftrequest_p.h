// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASOURCEFROMREDSHIFTREQUEST_P_H
#define QTAWS_CREATEDATASOURCEFROMREDSHIFTREQUEST_P_H

#include "machinelearningrequest_p.h"
#include "createdatasourcefromredshiftrequest.h"

namespace QtAws {
namespace MachineLearning {

class CreateDataSourceFromRedshiftRequest;

class CreateDataSourceFromRedshiftRequestPrivate : public MachineLearningRequestPrivate {

public:
    CreateDataSourceFromRedshiftRequestPrivate(const MachineLearningRequest::Action action,
                                   CreateDataSourceFromRedshiftRequest * const q);
    CreateDataSourceFromRedshiftRequestPrivate(const CreateDataSourceFromRedshiftRequestPrivate &other,
                                   CreateDataSourceFromRedshiftRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDataSourceFromRedshiftRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
