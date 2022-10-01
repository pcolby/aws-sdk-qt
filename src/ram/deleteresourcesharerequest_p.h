// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCESHAREREQUEST_P_H
#define QTAWS_DELETERESOURCESHAREREQUEST_P_H

#include "ramrequest_p.h"
#include "deleteresourcesharerequest.h"

namespace QtAws {
namespace Ram {

class DeleteResourceShareRequest;

class DeleteResourceShareRequestPrivate : public RamRequestPrivate {

public:
    DeleteResourceShareRequestPrivate(const RamRequest::Action action,
                                   DeleteResourceShareRequest * const q);
    DeleteResourceShareRequestPrivate(const DeleteResourceShareRequestPrivate &other,
                                   DeleteResourceShareRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteResourceShareRequest)

};

} // namespace Ram
} // namespace QtAws

#endif
