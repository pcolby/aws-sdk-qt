// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MACHINELEARNINGCLIENT_P_H
#define QTAWS_MACHINELEARNINGCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace MachineLearning {

class MachineLearningClient;

class MachineLearningClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit MachineLearningClientPrivate(MachineLearningClient * const q);

private:
    Q_DECLARE_PUBLIC(MachineLearningClient)
    Q_DISABLE_COPY(MachineLearningClientPrivate)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
