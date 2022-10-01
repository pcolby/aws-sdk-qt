// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESAVINGSPLANREQUEST_H
#define QTAWS_CREATESAVINGSPLANREQUEST_H

#include "savingsplansrequest.h"

namespace QtAws {
namespace SavingsPlans {

class CreateSavingsPlanRequestPrivate;

class QTAWSSAVINGSPLANS_EXPORT CreateSavingsPlanRequest : public SavingsPlansRequest {

public:
    CreateSavingsPlanRequest(const CreateSavingsPlanRequest &other);
    CreateSavingsPlanRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSavingsPlanRequest)

};

} // namespace SavingsPlans
} // namespace QtAws

#endif
