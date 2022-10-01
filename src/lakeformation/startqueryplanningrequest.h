// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTQUERYPLANNINGREQUEST_H
#define QTAWS_STARTQUERYPLANNINGREQUEST_H

#include "lakeformationrequest.h"

namespace QtAws {
namespace LakeFormation {

class StartQueryPlanningRequestPrivate;

class QTAWSLAKEFORMATION_EXPORT StartQueryPlanningRequest : public LakeFormationRequest {

public:
    StartQueryPlanningRequest(const StartQueryPlanningRequest &other);
    StartQueryPlanningRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartQueryPlanningRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
