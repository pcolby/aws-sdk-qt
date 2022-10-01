// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELENSREQUEST_P_H
#define QTAWS_DELETELENSREQUEST_P_H

#include "wellarchitectedrequest_p.h"
#include "deletelensrequest.h"

namespace QtAws {
namespace WellArchitected {

class DeleteLensRequest;

class DeleteLensRequestPrivate : public WellArchitectedRequestPrivate {

public:
    DeleteLensRequestPrivate(const WellArchitectedRequest::Action action,
                                   DeleteLensRequest * const q);
    DeleteLensRequestPrivate(const DeleteLensRequestPrivate &other,
                                   DeleteLensRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteLensRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
