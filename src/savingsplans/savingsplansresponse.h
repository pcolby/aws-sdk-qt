// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SAVINGSPLANSRESPONSE_H
#define QTAWS_SAVINGSPLANSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawssavingsplansglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace SavingsPlans {

class SavingsPlansResponsePrivate;

class QTAWSSAVINGSPLANS_EXPORT SavingsPlansResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    SavingsPlansResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    SavingsPlansResponse(SavingsPlansResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SavingsPlansResponse)
    Q_DISABLE_COPY(SavingsPlansResponse)

};

} // namespace SavingsPlans
} // namespace QtAws

#endif
