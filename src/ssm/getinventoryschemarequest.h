// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINVENTORYSCHEMAREQUEST_H
#define QTAWS_GETINVENTORYSCHEMAREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class GetInventorySchemaRequestPrivate;

class QTAWSSSM_EXPORT GetInventorySchemaRequest : public SsmRequest {

public:
    GetInventorySchemaRequest(const GetInventorySchemaRequest &other);
    GetInventorySchemaRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInventorySchemaRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
