// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBLOCKREQUEST_P_H
#define QTAWS_GETBLOCKREQUEST_P_H

#include "qldbrequest_p.h"
#include "getblockrequest.h"

namespace QtAws {
namespace Qldb {

class GetBlockRequest;

class GetBlockRequestPrivate : public QldbRequestPrivate {

public:
    GetBlockRequestPrivate(const QldbRequest::Action action,
                                   GetBlockRequest * const q);
    GetBlockRequestPrivate(const GetBlockRequestPrivate &other,
                                   GetBlockRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBlockRequest)

};

} // namespace Qldb
} // namespace QtAws

#endif
