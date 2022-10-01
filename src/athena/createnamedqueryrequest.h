// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENAMEDQUERYREQUEST_H
#define QTAWS_CREATENAMEDQUERYREQUEST_H

#include "athenarequest.h"

namespace QtAws {
namespace Athena {

class CreateNamedQueryRequestPrivate;

class QTAWSATHENA_EXPORT CreateNamedQueryRequest : public AthenaRequest {

public:
    CreateNamedQueryRequest(const CreateNamedQueryRequest &other);
    CreateNamedQueryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateNamedQueryRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
