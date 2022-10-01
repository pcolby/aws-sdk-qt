// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SCHEMASCLIENT_P_H
#define QTAWS_SCHEMASCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Schemas {

class SchemasClient;

class SchemasClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit SchemasClientPrivate(SchemasClient * const q);

private:
    Q_DECLARE_PUBLIC(SchemasClient)
    Q_DISABLE_COPY(SchemasClientPrivate)

};

} // namespace Schemas
} // namespace QtAws

#endif
