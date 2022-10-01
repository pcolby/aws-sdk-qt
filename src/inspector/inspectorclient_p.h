// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INSPECTORCLIENT_P_H
#define QTAWS_INSPECTORCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Inspector {

class InspectorClient;

class InspectorClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit InspectorClientPrivate(InspectorClient * const q);

private:
    Q_DECLARE_PUBLIC(InspectorClient)
    Q_DISABLE_COPY(InspectorClientPrivate)

};

} // namespace Inspector
} // namespace QtAws

#endif
