// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFILTERREQUEST_P_H
#define QTAWS_DELETEFILTERREQUEST_P_H

#include "inspector2request_p.h"
#include "deletefilterrequest.h"

namespace QtAws {
namespace Inspector2 {

class DeleteFilterRequest;

class DeleteFilterRequestPrivate : public Inspector2RequestPrivate {

public:
    DeleteFilterRequestPrivate(const Inspector2Request::Action action,
                                   DeleteFilterRequest * const q);
    DeleteFilterRequestPrivate(const DeleteFilterRequestPrivate &other,
                                   DeleteFilterRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFilterRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif
