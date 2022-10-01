// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETNAMEDQUERYREQUEST_H
#define QTAWS_BATCHGETNAMEDQUERYREQUEST_H

#include "athenarequest.h"

namespace QtAws {
namespace Athena {

class BatchGetNamedQueryRequestPrivate;

class QTAWSATHENA_EXPORT BatchGetNamedQueryRequest : public AthenaRequest {

public:
    BatchGetNamedQueryRequest(const BatchGetNamedQueryRequest &other);
    BatchGetNamedQueryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetNamedQueryRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
