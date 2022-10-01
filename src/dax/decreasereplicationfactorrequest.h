// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DECREASEREPLICATIONFACTORREQUEST_H
#define QTAWS_DECREASEREPLICATIONFACTORREQUEST_H

#include "daxrequest.h"

namespace QtAws {
namespace Dax {

class DecreaseReplicationFactorRequestPrivate;

class QTAWSDAX_EXPORT DecreaseReplicationFactorRequest : public DaxRequest {

public:
    DecreaseReplicationFactorRequest(const DecreaseReplicationFactorRequest &other);
    DecreaseReplicationFactorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DecreaseReplicationFactorRequest)

};

} // namespace Dax
} // namespace QtAws

#endif
