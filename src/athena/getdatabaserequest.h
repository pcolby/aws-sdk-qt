// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATABASEREQUEST_H
#define QTAWS_GETDATABASEREQUEST_H

#include "athenarequest.h"

namespace QtAws {
namespace Athena {

class GetDatabaseRequestPrivate;

class QTAWSATHENA_EXPORT GetDatabaseRequest : public AthenaRequest {

public:
    GetDatabaseRequest(const GetDatabaseRequest &other);
    GetDatabaseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDatabaseRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
