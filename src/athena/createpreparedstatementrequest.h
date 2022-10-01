// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPREPAREDSTATEMENTREQUEST_H
#define QTAWS_CREATEPREPAREDSTATEMENTREQUEST_H

#include "athenarequest.h"

namespace QtAws {
namespace Athena {

class CreatePreparedStatementRequestPrivate;

class QTAWSATHENA_EXPORT CreatePreparedStatementRequest : public AthenaRequest {

public:
    CreatePreparedStatementRequest(const CreatePreparedStatementRequest &other);
    CreatePreparedStatementRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePreparedStatementRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
