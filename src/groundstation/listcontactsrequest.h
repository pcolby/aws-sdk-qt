// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTACTSREQUEST_H
#define QTAWS_LISTCONTACTSREQUEST_H

#include "groundstationrequest.h"

namespace QtAws {
namespace GroundStation {

class ListContactsRequestPrivate;

class QTAWSGROUNDSTATION_EXPORT ListContactsRequest : public GroundStationRequest {

public:
    ListContactsRequest(const ListContactsRequest &other);
    ListContactsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListContactsRequest)

};

} // namespace GroundStation
} // namespace QtAws

#endif
