// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRETAINEDMESSAGESREQUEST_H
#define QTAWS_LISTRETAINEDMESSAGESREQUEST_H

#include "iotdataplanerequest.h"

namespace QtAws {
namespace IoTDataPlane {

class ListRetainedMessagesRequestPrivate;

class QTAWSIOTDATAPLANE_EXPORT ListRetainedMessagesRequest : public IoTDataPlaneRequest {

public:
    ListRetainedMessagesRequest(const ListRetainedMessagesRequest &other);
    ListRetainedMessagesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRetainedMessagesRequest)

};

} // namespace IoTDataPlane
} // namespace QtAws

#endif
