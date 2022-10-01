// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DATABREWCLIENT_P_H
#define QTAWS_DATABREWCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace DataBrew {

class DataBrewClient;

class DataBrewClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit DataBrewClientPrivate(DataBrewClient * const q);

private:
    Q_DECLARE_PUBLIC(DataBrewClient)
    Q_DISABLE_COPY(DataBrewClientPrivate)

};

} // namespace DataBrew
} // namespace QtAws

#endif
