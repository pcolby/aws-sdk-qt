// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INCREASEREPLICATIONFACTORREQUEST_H
#define QTAWS_INCREASEREPLICATIONFACTORREQUEST_H

#include "daxrequest.h"

namespace QtAws {
namespace Dax {

class IncreaseReplicationFactorRequestPrivate;

class QTAWSDAX_EXPORT IncreaseReplicationFactorRequest : public DaxRequest {

public:
    IncreaseReplicationFactorRequest(const IncreaseReplicationFactorRequest &other);
    IncreaseReplicationFactorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IncreaseReplicationFactorRequest)

};

} // namespace Dax
} // namespace QtAws

#endif
