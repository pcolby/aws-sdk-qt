// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTATEMENTRESULTREQUEST_P_H
#define QTAWS_GETSTATEMENTRESULTREQUEST_P_H

#include "redshiftdatarequest_p.h"
#include "getstatementresultrequest.h"

namespace QtAws {
namespace RedshiftData {

class GetStatementResultRequest;

class GetStatementResultRequestPrivate : public RedshiftDataRequestPrivate {

public:
    GetStatementResultRequestPrivate(const RedshiftDataRequest::Action action,
                                   GetStatementResultRequest * const q);
    GetStatementResultRequestPrivate(const GetStatementResultRequestPrivate &other,
                                   GetStatementResultRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetStatementResultRequest)

};

} // namespace RedshiftData
} // namespace QtAws

#endif
