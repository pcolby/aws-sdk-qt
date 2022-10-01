// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LOOKOUTEQUIPMENTCLIENT_P_H
#define QTAWS_LOOKOUTEQUIPMENTCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace LookoutEquipment {

class LookoutEquipmentClient;

class LookoutEquipmentClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit LookoutEquipmentClientPrivate(LookoutEquipmentClient * const q);

private:
    Q_DECLARE_PUBLIC(LookoutEquipmentClient)
    Q_DISABLE_COPY(LookoutEquipmentClientPrivate)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
