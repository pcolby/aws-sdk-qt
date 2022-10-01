// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELENSSHAREREQUEST_P_H
#define QTAWS_DELETELENSSHAREREQUEST_P_H

#include "wellarchitectedrequest_p.h"
#include "deletelenssharerequest.h"

namespace QtAws {
namespace WellArchitected {

class DeleteLensShareRequest;

class DeleteLensShareRequestPrivate : public WellArchitectedRequestPrivate {

public:
    DeleteLensShareRequestPrivate(const WellArchitectedRequest::Action action,
                                   DeleteLensShareRequest * const q);
    DeleteLensShareRequestPrivate(const DeleteLensShareRequestPrivate &other,
                                   DeleteLensShareRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteLensShareRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
