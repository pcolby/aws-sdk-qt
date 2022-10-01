// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ELASTICTRANSCODERCLIENT_P_H
#define QTAWS_ELASTICTRANSCODERCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace ElasticTranscoder {

class ElasticTranscoderClient;

class ElasticTranscoderClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit ElasticTranscoderClientPrivate(ElasticTranscoderClient * const q);

private:
    Q_DECLARE_PUBLIC(ElasticTranscoderClient)
    Q_DISABLE_COPY(ElasticTranscoderClientPrivate)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif
