// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPMONITORSREQUEST_H
#define QTAWS_LISTAPPMONITORSREQUEST_H

#include "rumrequest.h"

namespace QtAws {
namespace Rum {

class ListAppMonitorsRequestPrivate;

class QTAWSRUM_EXPORT ListAppMonitorsRequest : public RumRequest {

public:
    ListAppMonitorsRequest(const ListAppMonitorsRequest &other);
    ListAppMonitorsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAppMonitorsRequest)

};

} // namespace Rum
} // namespace QtAws

#endif
