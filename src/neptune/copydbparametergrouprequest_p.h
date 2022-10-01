// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYDBPARAMETERGROUPREQUEST_P_H
#define QTAWS_COPYDBPARAMETERGROUPREQUEST_P_H

#include "neptunerequest_p.h"
#include "copydbparametergrouprequest.h"

namespace QtAws {
namespace Neptune {

class CopyDBParameterGroupRequest;

class CopyDBParameterGroupRequestPrivate : public NeptuneRequestPrivate {

public:
    CopyDBParameterGroupRequestPrivate(const NeptuneRequest::Action action,
                                   CopyDBParameterGroupRequest * const q);
    CopyDBParameterGroupRequestPrivate(const CopyDBParameterGroupRequestPrivate &other,
                                   CopyDBParameterGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CopyDBParameterGroupRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
