// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENAMEDQUERYREQUEST_H
#define QTAWS_DELETENAMEDQUERYREQUEST_H

#include "athenarequest.h"

namespace QtAws {
namespace Athena {

class DeleteNamedQueryRequestPrivate;

class QTAWSATHENA_EXPORT DeleteNamedQueryRequest : public AthenaRequest {

public:
    DeleteNamedQueryRequest(const DeleteNamedQueryRequest &other);
    DeleteNamedQueryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNamedQueryRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
