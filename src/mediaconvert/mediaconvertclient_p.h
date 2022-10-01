// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MEDIACONVERTCLIENT_P_H
#define QTAWS_MEDIACONVERTCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace MediaConvert {

class MediaConvertClient;

class MediaConvertClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit MediaConvertClientPrivate(MediaConvertClient * const q);

private:
    Q_DECLARE_PUBLIC(MediaConvertClient)
    Q_DISABLE_COPY(MediaConvertClientPrivate)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
