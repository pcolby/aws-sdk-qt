// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPREPAREDSTATEMENTREQUEST_H
#define QTAWS_GETPREPAREDSTATEMENTREQUEST_H

#include "athenarequest.h"

namespace QtAws {
namespace Athena {

class GetPreparedStatementRequestPrivate;

class QTAWSATHENA_EXPORT GetPreparedStatementRequest : public AthenaRequest {

public:
    GetPreparedStatementRequest(const GetPreparedStatementRequest &other);
    GetPreparedStatementRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPreparedStatementRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
