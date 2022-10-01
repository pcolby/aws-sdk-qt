// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKSPACEREQUEST_P_H
#define QTAWS_DELETEWORKSPACEREQUEST_P_H

#include "amprequest_p.h"
#include "deleteworkspacerequest.h"

namespace QtAws {
namespace Amp {

class DeleteWorkspaceRequest;

class DeleteWorkspaceRequestPrivate : public AmpRequestPrivate {

public:
    DeleteWorkspaceRequestPrivate(const AmpRequest::Action action,
                                   DeleteWorkspaceRequest * const q);
    DeleteWorkspaceRequestPrivate(const DeleteWorkspaceRequestPrivate &other,
                                   DeleteWorkspaceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteWorkspaceRequest)

};

} // namespace Amp
} // namespace QtAws

#endif
