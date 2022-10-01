// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDETECTORMODELREQUEST_H
#define QTAWS_DELETEDETECTORMODELREQUEST_H

#include "ioteventsrequest.h"

namespace QtAws {
namespace IoTEvents {

class DeleteDetectorModelRequestPrivate;

class QTAWSIOTEVENTS_EXPORT DeleteDetectorModelRequest : public IoTEventsRequest {

public:
    DeleteDetectorModelRequest(const DeleteDetectorModelRequest &other);
    DeleteDetectorModelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDetectorModelRequest)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
