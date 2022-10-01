// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VOICEIDREQUEST_P_H
#define QTAWS_VOICEIDREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "voiceidrequest.h"

namespace QtAws {
namespace VoiceId {

class VoiceIdRequest;

class VoiceIdRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    VoiceIdRequest::Action action; ///< VoiceId action to be performed.
    QString apiVersion;        ///< VoiceId API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< VoiceId request (query string) parameters. @todo?

    VoiceIdRequestPrivate(const VoiceIdRequest::Action action, VoiceIdRequest * const q);
    VoiceIdRequestPrivate(const VoiceIdRequestPrivate &other, VoiceIdRequest * const q);

    static QString toString(const VoiceIdRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(VoiceIdRequest)

};

} // namespace VoiceId
} // namespace QtAws

#endif
