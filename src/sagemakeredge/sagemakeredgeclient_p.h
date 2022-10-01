// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SAGEMAKEREDGECLIENT_P_H
#define QTAWS_SAGEMAKEREDGECLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace SagemakerEdge {

class SagemakerEdgeClient;

class SagemakerEdgeClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit SagemakerEdgeClientPrivate(SagemakerEdgeClient * const q);

private:
    Q_DECLARE_PUBLIC(SagemakerEdgeClient)
    Q_DISABLE_COPY(SagemakerEdgeClientPrivate)

};

} // namespace SagemakerEdge
} // namespace QtAws

#endif
