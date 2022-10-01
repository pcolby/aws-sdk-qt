// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SMSRESPONSE_H
#define QTAWS_SMSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawssmsglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Sms {

class SmsResponsePrivate;

class QTAWSSMS_EXPORT SmsResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    SmsResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    SmsResponse(SmsResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SmsResponse)
    Q_DISABLE_COPY(SmsResponse)

};

} // namespace Sms
} // namespace QtAws

#endif
