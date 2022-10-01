// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSENSORSTATISTICSREQUEST_H
#define QTAWS_LISTSENSORSTATISTICSREQUEST_H

#include "lookoutequipmentrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class ListSensorStatisticsRequestPrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT ListSensorStatisticsRequest : public LookoutEquipmentRequest {

public:
    ListSensorStatisticsRequest(const ListSensorStatisticsRequest &other);
    ListSensorStatisticsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSensorStatisticsRequest)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
