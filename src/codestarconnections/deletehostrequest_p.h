// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHOSTREQUEST_P_H
#define QTAWS_DELETEHOSTREQUEST_P_H

#include "codestarconnectionsrequest_p.h"
#include "deletehostrequest.h"

namespace QtAws {
namespace CodeStarconnections {

class DeleteHostRequest;

class DeleteHostRequestPrivate : public CodeStarconnectionsRequestPrivate {

public:
    DeleteHostRequestPrivate(const CodeStarconnectionsRequest::Action action,
                                   DeleteHostRequest * const q);
    DeleteHostRequestPrivate(const DeleteHostRequestPrivate &other,
                                   DeleteHostRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteHostRequest)

};

} // namespace CodeStarconnections
} // namespace QtAws

#endif
