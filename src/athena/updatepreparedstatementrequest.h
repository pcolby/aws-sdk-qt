// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPREPAREDSTATEMENTREQUEST_H
#define QTAWS_UPDATEPREPAREDSTATEMENTREQUEST_H

#include "athenarequest.h"

namespace QtAws {
namespace Athena {

class UpdatePreparedStatementRequestPrivate;

class QTAWSATHENA_EXPORT UpdatePreparedStatementRequest : public AthenaRequest {

public:
    UpdatePreparedStatementRequest(const UpdatePreparedStatementRequest &other);
    UpdatePreparedStatementRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePreparedStatementRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
