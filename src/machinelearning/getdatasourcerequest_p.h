// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATASOURCEREQUEST_P_H
#define QTAWS_GETDATASOURCEREQUEST_P_H

#include "machinelearningrequest_p.h"
#include "getdatasourcerequest.h"

namespace QtAws {
namespace MachineLearning {

class GetDataSourceRequest;

class GetDataSourceRequestPrivate : public MachineLearningRequestPrivate {

public:
    GetDataSourceRequestPrivate(const MachineLearningRequest::Action action,
                                   GetDataSourceRequest * const q);
    GetDataSourceRequestPrivate(const GetDataSourceRequestPrivate &other,
                                   GetDataSourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDataSourceRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
