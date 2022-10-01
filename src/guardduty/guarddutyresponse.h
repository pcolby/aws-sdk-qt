// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GUARDDUTYRESPONSE_H
#define QTAWS_GUARDDUTYRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsguarddutyglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace GuardDuty {

class GuardDutyResponsePrivate;

class QTAWSGUARDDUTY_EXPORT GuardDutyResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    GuardDutyResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    GuardDutyResponse(GuardDutyResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GuardDutyResponse)
    Q_DISABLE_COPY(GuardDutyResponse)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
