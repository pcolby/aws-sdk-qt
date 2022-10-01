// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUNDSTATIONSREQUEST_H
#define QTAWS_LISTGROUNDSTATIONSREQUEST_H

#include "groundstationrequest.h"

namespace QtAws {
namespace GroundStation {

class ListGroundStationsRequestPrivate;

class QTAWSGROUNDSTATION_EXPORT ListGroundStationsRequest : public GroundStationRequest {

public:
    ListGroundStationsRequest(const ListGroundStationsRequest &other);
    ListGroundStationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGroundStationsRequest)

};

} // namespace GroundStation
} // namespace QtAws

#endif
