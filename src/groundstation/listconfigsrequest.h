// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONFIGSREQUEST_H
#define QTAWS_LISTCONFIGSREQUEST_H

#include "groundstationrequest.h"

namespace QtAws {
namespace GroundStation {

class ListConfigsRequestPrivate;

class QTAWSGROUNDSTATION_EXPORT ListConfigsRequest : public GroundStationRequest {

public:
    ListConfigsRequest(const ListConfigsRequest &other);
    ListConfigsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListConfigsRequest)

};

} // namespace GroundStation
} // namespace QtAws

#endif
