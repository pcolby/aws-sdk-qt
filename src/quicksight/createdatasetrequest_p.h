// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASETREQUEST_P_H
#define QTAWS_CREATEDATASETREQUEST_P_H

#include "quicksightrequest_p.h"
#include "createdatasetrequest.h"

namespace QtAws {
namespace QuickSight {

class CreateDataSetRequest;

class CreateDataSetRequestPrivate : public QuickSightRequestPrivate {

public:
    CreateDataSetRequestPrivate(const QuickSightRequest::Action action,
                                   CreateDataSetRequest * const q);
    CreateDataSetRequestPrivate(const CreateDataSetRequestPrivate &other,
                                   CreateDataSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDataSetRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
