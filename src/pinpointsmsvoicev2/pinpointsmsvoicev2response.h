// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PINPOINTSMSVOICEV2RESPONSE_H
#define QTAWS_PINPOINTSMSVOICEV2RESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawspinpointsmsvoicev2global.h"
//#include "@todo-error.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class PinpointSmsVoiceV2ResponsePrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT PinpointSmsVoiceV2Response : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    PinpointSmsVoiceV2Response(QObject * const parent = 0);

protected:
    /// @cond internal
    PinpointSmsVoiceV2Response(PinpointSmsVoiceV2ResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PinpointSmsVoiceV2Response)
    Q_DISABLE_COPY(PinpointSmsVoiceV2Response)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
