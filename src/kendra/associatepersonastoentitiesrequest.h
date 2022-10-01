// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEPERSONASTOENTITIESREQUEST_H
#define QTAWS_ASSOCIATEPERSONASTOENTITIESREQUEST_H

#include "kendrarequest.h"

namespace QtAws {
namespace Kendra {

class AssociatePersonasToEntitiesRequestPrivate;

class QTAWSKENDRA_EXPORT AssociatePersonasToEntitiesRequest : public KendraRequest {

public:
    AssociatePersonasToEntitiesRequest(const AssociatePersonasToEntitiesRequest &other);
    AssociatePersonasToEntitiesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociatePersonasToEntitiesRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
