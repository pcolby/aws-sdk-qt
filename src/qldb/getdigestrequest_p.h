// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDIGESTREQUEST_P_H
#define QTAWS_GETDIGESTREQUEST_P_H

#include "qldbrequest_p.h"
#include "getdigestrequest.h"

namespace QtAws {
namespace Qldb {

class GetDigestRequest;

class GetDigestRequestPrivate : public QldbRequestPrivate {

public:
    GetDigestRequestPrivate(const QldbRequest::Action action,
                                   GetDigestRequest * const q);
    GetDigestRequestPrivate(const GetDigestRequestPrivate &other,
                                   GetDigestRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDigestRequest)

};

} // namespace Qldb
} // namespace QtAws

#endif
