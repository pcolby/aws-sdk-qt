// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATASETREQUEST_P_H
#define QTAWS_UPDATEDATASETREQUEST_P_H

#include "databrewrequest_p.h"
#include "updatedatasetrequest.h"

namespace QtAws {
namespace DataBrew {

class UpdateDatasetRequest;

class UpdateDatasetRequestPrivate : public DataBrewRequestPrivate {

public:
    UpdateDatasetRequestPrivate(const DataBrewRequest::Action action,
                                   UpdateDatasetRequest * const q);
    UpdateDatasetRequestPrivate(const UpdateDatasetRequestPrivate &other,
                                   UpdateDatasetRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDatasetRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
