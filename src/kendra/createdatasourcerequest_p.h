// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASOURCEREQUEST_P_H
#define QTAWS_CREATEDATASOURCEREQUEST_P_H

#include "kendrarequest_p.h"
#include "createdatasourcerequest.h"

namespace QtAws {
namespace Kendra {

class CreateDataSourceRequest;

class CreateDataSourceRequestPrivate : public KendraRequestPrivate {

public:
    CreateDataSourceRequestPrivate(const KendraRequest::Action action,
                                   CreateDataSourceRequest * const q);
    CreateDataSourceRequestPrivate(const CreateDataSourceRequestPrivate &other,
                                   CreateDataSourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDataSourceRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
