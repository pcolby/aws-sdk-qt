// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEPERSONASFROMENTITIESREQUEST_H
#define QTAWS_DISASSOCIATEPERSONASFROMENTITIESREQUEST_H

#include "kendrarequest.h"

namespace QtAws {
namespace Kendra {

class DisassociatePersonasFromEntitiesRequestPrivate;

class QTAWSKENDRA_EXPORT DisassociatePersonasFromEntitiesRequest : public KendraRequest {

public:
    DisassociatePersonasFromEntitiesRequest(const DisassociatePersonasFromEntitiesRequest &other);
    DisassociatePersonasFromEntitiesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociatePersonasFromEntitiesRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
