// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATASETREQUEST_P_H
#define QTAWS_UPDATEDATASETREQUEST_P_H

#include "quicksightrequest_p.h"
#include "updatedatasetrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateDataSetRequest;

class UpdateDataSetRequestPrivate : public QuickSightRequestPrivate {

public:
    UpdateDataSetRequestPrivate(const QuickSightRequest::Action action,
                                   UpdateDataSetRequest * const q);
    UpdateDataSetRequestPrivate(const UpdateDataSetRequestPrivate &other,
                                   UpdateDataSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDataSetRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
