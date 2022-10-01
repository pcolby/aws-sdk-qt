// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTUDIOREQUEST_P_H
#define QTAWS_DELETESTUDIOREQUEST_P_H

#include "emrrequest_p.h"
#include "deletestudiorequest.h"

namespace QtAws {
namespace Emr {

class DeleteStudioRequest;

class DeleteStudioRequestPrivate : public EmrRequestPrivate {

public:
    DeleteStudioRequestPrivate(const EmrRequest::Action action,
                                   DeleteStudioRequest * const q);
    DeleteStudioRequestPrivate(const DeleteStudioRequestPrivate &other,
                                   DeleteStudioRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteStudioRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
