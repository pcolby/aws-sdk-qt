// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTQUERYEXECUTIONSREQUEST_H
#define QTAWS_LISTQUERYEXECUTIONSREQUEST_H

#include "athenarequest.h"

namespace QtAws {
namespace Athena {

class ListQueryExecutionsRequestPrivate;

class QTAWSATHENA_EXPORT ListQueryExecutionsRequest : public AthenaRequest {

public:
    ListQueryExecutionsRequest(const ListQueryExecutionsRequest &other);
    ListQueryExecutionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListQueryExecutionsRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
