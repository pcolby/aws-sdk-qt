// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATASOURCEREQUEST_P_H
#define QTAWS_UPDATEDATASOURCEREQUEST_P_H

#include "kendrarequest_p.h"
#include "updatedatasourcerequest.h"

namespace QtAws {
namespace Kendra {

class UpdateDataSourceRequest;

class UpdateDataSourceRequestPrivate : public KendraRequestPrivate {

public:
    UpdateDataSourceRequestPrivate(const KendraRequest::Action action,
                                   UpdateDataSourceRequest * const q);
    UpdateDataSourceRequestPrivate(const UpdateDataSourceRequestPrivate &other,
                                   UpdateDataSourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDataSourceRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
