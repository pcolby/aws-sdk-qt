// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTINVENTORYREQUEST_H
#define QTAWS_PUTINVENTORYREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class PutInventoryRequestPrivate;

class QTAWSSSM_EXPORT PutInventoryRequest : public SsmRequest {

public:
    PutInventoryRequest(const PutInventoryRequest &other);
    PutInventoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutInventoryRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
