// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMULTIPARTUPLOADSREQUEST_P_H
#define QTAWS_LISTMULTIPARTUPLOADSREQUEST_P_H

#include "glacierrequest_p.h"
#include "listmultipartuploadsrequest.h"

namespace QtAws {
namespace Glacier {

class ListMultipartUploadsRequest;

class ListMultipartUploadsRequestPrivate : public GlacierRequestPrivate {

public:
    ListMultipartUploadsRequestPrivate(const GlacierRequest::Action action,
                                   ListMultipartUploadsRequest * const q);
    ListMultipartUploadsRequestPrivate(const ListMultipartUploadsRequestPrivate &other,
                                   ListMultipartUploadsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListMultipartUploadsRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
