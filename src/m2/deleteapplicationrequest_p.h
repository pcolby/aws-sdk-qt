// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONREQUEST_P_H
#define QTAWS_DELETEAPPLICATIONREQUEST_P_H

#include "m2request_p.h"
#include "deleteapplicationrequest.h"

namespace QtAws {
namespace M2 {

class DeleteApplicationRequest;

class DeleteApplicationRequestPrivate : public M2RequestPrivate {

public:
    DeleteApplicationRequestPrivate(const M2Request::Action action,
                                   DeleteApplicationRequest * const q);
    DeleteApplicationRequestPrivate(const DeleteApplicationRequestPrivate &other,
                                   DeleteApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteApplicationRequest)

};

} // namespace M2
} // namespace QtAws

#endif
