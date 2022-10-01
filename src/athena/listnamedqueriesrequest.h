// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNAMEDQUERIESREQUEST_H
#define QTAWS_LISTNAMEDQUERIESREQUEST_H

#include "athenarequest.h"

namespace QtAws {
namespace Athena {

class ListNamedQueriesRequestPrivate;

class QTAWSATHENA_EXPORT ListNamedQueriesRequest : public AthenaRequest {

public:
    ListNamedQueriesRequest(const ListNamedQueriesRequest &other);
    ListNamedQueriesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListNamedQueriesRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
