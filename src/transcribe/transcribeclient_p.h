// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSCRIBECLIENT_P_H
#define QTAWS_TRANSCRIBECLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Transcribe {

class TranscribeClient;

class TranscribeClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit TranscribeClientPrivate(TranscribeClient * const q);

private:
    Q_DECLARE_PUBLIC(TranscribeClient)
    Q_DISABLE_COPY(TranscribeClientPrivate)

};

} // namespace Transcribe
} // namespace QtAws

#endif
