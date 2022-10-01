// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENAMEDQUERYREQUEST_H
#define QTAWS_UPDATENAMEDQUERYREQUEST_H

#include "athenarequest.h"

namespace QtAws {
namespace Athena {

class UpdateNamedQueryRequestPrivate;

class QTAWSATHENA_EXPORT UpdateNamedQueryRequest : public AthenaRequest {

public:
    UpdateNamedQueryRequest(const UpdateNamedQueryRequest &other);
    UpdateNamedQueryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateNamedQueryRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
