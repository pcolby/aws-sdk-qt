// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNAMEDQUERYREQUEST_H
#define QTAWS_GETNAMEDQUERYREQUEST_H

#include "athenarequest.h"

namespace QtAws {
namespace Athena {

class GetNamedQueryRequestPrivate;

class QTAWSATHENA_EXPORT GetNamedQueryRequest : public AthenaRequest {

public:
    GetNamedQueryRequest(const GetNamedQueryRequest &other);
    GetNamedQueryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetNamedQueryRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
