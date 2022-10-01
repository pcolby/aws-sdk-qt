// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PINPOINTEMAILRESPONSE_H
#define QTAWS_PINPOINTEMAILRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawspinpointemailglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace PinpointEmail {

class PinpointEmailResponsePrivate;

class QTAWSPINPOINTEMAIL_EXPORT PinpointEmailResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    PinpointEmailResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    PinpointEmailResponse(PinpointEmailResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PinpointEmailResponse)
    Q_DISABLE_COPY(PinpointEmailResponse)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
