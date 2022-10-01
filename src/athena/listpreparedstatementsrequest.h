// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPREPAREDSTATEMENTSREQUEST_H
#define QTAWS_LISTPREPAREDSTATEMENTSREQUEST_H

#include "athenarequest.h"

namespace QtAws {
namespace Athena {

class ListPreparedStatementsRequestPrivate;

class QTAWSATHENA_EXPORT ListPreparedStatementsRequest : public AthenaRequest {

public:
    ListPreparedStatementsRequest(const ListPreparedStatementsRequest &other);
    ListPreparedStatementsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPreparedStatementsRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
