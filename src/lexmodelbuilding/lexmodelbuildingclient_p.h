// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LEXMODELBUILDINGCLIENT_P_H
#define QTAWS_LEXMODELBUILDINGCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace LexModelBuilding {

class LexModelBuildingClient;

class LexModelBuildingClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit LexModelBuildingClientPrivate(LexModelBuildingClient * const q);

private:
    Q_DECLARE_PUBLIC(LexModelBuildingClient)
    Q_DISABLE_COPY(LexModelBuildingClientPrivate)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
