// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBPARAMETERGROUPREQUEST_P_H
#define QTAWS_DELETEDBPARAMETERGROUPREQUEST_P_H

#include "neptunerequest_p.h"
#include "deletedbparametergrouprequest.h"

namespace QtAws {
namespace Neptune {

class DeleteDBParameterGroupRequest;

class DeleteDBParameterGroupRequestPrivate : public NeptuneRequestPrivate {

public:
    DeleteDBParameterGroupRequestPrivate(const NeptuneRequest::Action action,
                                   DeleteDBParameterGroupRequest * const q);
    DeleteDBParameterGroupRequestPrivate(const DeleteDBParameterGroupRequestPrivate &other,
                                   DeleteDBParameterGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDBParameterGroupRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
