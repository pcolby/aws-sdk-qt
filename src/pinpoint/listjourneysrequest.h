// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTJOURNEYSREQUEST_H
#define QTAWS_LISTJOURNEYSREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class ListJourneysRequestPrivate;

class QTAWSPINPOINT_EXPORT ListJourneysRequest : public PinpointRequest {

public:
    ListJourneysRequest(const ListJourneysRequest &other);
    ListJourneysRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListJourneysRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
