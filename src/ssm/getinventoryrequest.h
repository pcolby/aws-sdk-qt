// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINVENTORYREQUEST_H
#define QTAWS_GETINVENTORYREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class GetInventoryRequestPrivate;

class QTAWSSSM_EXPORT GetInventoryRequest : public SsmRequest {

public:
    GetInventoryRequest(const GetInventoryRequest &other);
    GetInventoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInventoryRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
