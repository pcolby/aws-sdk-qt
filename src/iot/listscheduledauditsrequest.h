// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSCHEDULEDAUDITSREQUEST_H
#define QTAWS_LISTSCHEDULEDAUDITSREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class ListScheduledAuditsRequestPrivate;

class QTAWSIOT_EXPORT ListScheduledAuditsRequest : public IoTRequest {

public:
    ListScheduledAuditsRequest(const ListScheduledAuditsRequest &other);
    ListScheduledAuditsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListScheduledAuditsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
