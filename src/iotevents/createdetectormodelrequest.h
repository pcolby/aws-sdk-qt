// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDETECTORMODELREQUEST_H
#define QTAWS_CREATEDETECTORMODELREQUEST_H

#include "ioteventsrequest.h"

namespace QtAws {
namespace IoTEvents {

class CreateDetectorModelRequestPrivate;

class QTAWSIOTEVENTS_EXPORT CreateDetectorModelRequest : public IoTEventsRequest {

public:
    CreateDetectorModelRequest(const CreateDetectorModelRequest &other);
    CreateDetectorModelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDetectorModelRequest)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
