// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEENTITIESFROMEXPERIENCEREQUEST_H
#define QTAWS_DISASSOCIATEENTITIESFROMEXPERIENCEREQUEST_H

#include "kendrarequest.h"

namespace QtAws {
namespace Kendra {

class DisassociateEntitiesFromExperienceRequestPrivate;

class QTAWSKENDRA_EXPORT DisassociateEntitiesFromExperienceRequest : public KendraRequest {

public:
    DisassociateEntitiesFromExperienceRequest(const DisassociateEntitiesFromExperienceRequest &other);
    DisassociateEntitiesFromExperienceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateEntitiesFromExperienceRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
