// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEJOBREQUEST_P_H
#define QTAWS_DELETEJOBREQUEST_P_H

#include "drsrequest_p.h"
#include "deletejobrequest.h"

namespace QtAws {
namespace Drs {

class DeleteJobRequest;

class DeleteJobRequestPrivate : public DrsRequestPrivate {

public:
    DeleteJobRequestPrivate(const DrsRequest::Action action,
                                   DeleteJobRequest * const q);
    DeleteJobRequestPrivate(const DeleteJobRequestPrivate &other,
                                   DeleteJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteJobRequest)

};

} // namespace Drs
} // namespace QtAws

#endif
