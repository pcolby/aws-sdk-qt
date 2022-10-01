// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEJOBREQUEST_P_H
#define QTAWS_DELETEJOBREQUEST_P_H

#include "databrewrequest_p.h"
#include "deletejobrequest.h"

namespace QtAws {
namespace DataBrew {

class DeleteJobRequest;

class DeleteJobRequestPrivate : public DataBrewRequestPrivate {

public:
    DeleteJobRequestPrivate(const DataBrewRequest::Action action,
                                   DeleteJobRequest * const q);
    DeleteJobRequestPrivate(const DeleteJobRequestPrivate &other,
                                   DeleteJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteJobRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
