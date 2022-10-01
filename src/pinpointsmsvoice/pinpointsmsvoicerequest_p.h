// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PINPOINTSMSVOICEREQUEST_P_H
#define QTAWS_PINPOINTSMSVOICEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "pinpointsmsvoicerequest.h"

namespace QtAws {
namespace PinpointSmsVoice {

class PinpointSmsVoiceRequest;

class PinpointSmsVoiceRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    PinpointSmsVoiceRequest::Action action; ///< PinpointSmsVoice action to be performed.
    QString apiVersion;        ///< PinpointSmsVoice API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< PinpointSmsVoice request (query string) parameters. @todo?

    PinpointSmsVoiceRequestPrivate(const PinpointSmsVoiceRequest::Action action, PinpointSmsVoiceRequest * const q);
    PinpointSmsVoiceRequestPrivate(const PinpointSmsVoiceRequestPrivate &other, PinpointSmsVoiceRequest * const q);

    static QString toString(const PinpointSmsVoiceRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(PinpointSmsVoiceRequest)

};

} // namespace PinpointSmsVoice
} // namespace QtAws

#endif
