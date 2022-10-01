// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEENTITIESTOEXPERIENCEREQUEST_H
#define QTAWS_ASSOCIATEENTITIESTOEXPERIENCEREQUEST_H

#include "kendrarequest.h"

namespace QtAws {
namespace Kendra {

class AssociateEntitiesToExperienceRequestPrivate;

class QTAWSKENDRA_EXPORT AssociateEntitiesToExperienceRequest : public KendraRequest {

public:
    AssociateEntitiesToExperienceRequest(const AssociateEntitiesToExperienceRequest &other);
    AssociateEntitiesToExperienceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateEntitiesToExperienceRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
