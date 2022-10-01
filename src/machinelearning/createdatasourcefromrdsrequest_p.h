// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASOURCEFROMRDSREQUEST_P_H
#define QTAWS_CREATEDATASOURCEFROMRDSREQUEST_P_H

#include "machinelearningrequest_p.h"
#include "createdatasourcefromrdsrequest.h"

namespace QtAws {
namespace MachineLearning {

class CreateDataSourceFromRDSRequest;

class CreateDataSourceFromRDSRequestPrivate : public MachineLearningRequestPrivate {

public:
    CreateDataSourceFromRDSRequestPrivate(const MachineLearningRequest::Action action,
                                   CreateDataSourceFromRDSRequest * const q);
    CreateDataSourceFromRDSRequestPrivate(const CreateDataSourceFromRDSRequestPrivate &other,
                                   CreateDataSourceFromRDSRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDataSourceFromRDSRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
