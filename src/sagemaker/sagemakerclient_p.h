// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SAGEMAKERCLIENT_P_H
#define QTAWS_SAGEMAKERCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace SageMaker {

class SageMakerClient;

class SageMakerClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit SageMakerClientPrivate(SageMakerClient * const q);

private:
    Q_DECLARE_PUBLIC(SageMakerClient)
    Q_DISABLE_COPY(SageMakerClientPrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
