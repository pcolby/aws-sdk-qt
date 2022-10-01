// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTJOBEXECUTIONSFORTHINGREQUEST_H
#define QTAWS_LISTJOBEXECUTIONSFORTHINGREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class ListJobExecutionsForThingRequestPrivate;

class QTAWSIOT_EXPORT ListJobExecutionsForThingRequest : public IoTRequest {

public:
    ListJobExecutionsForThingRequest(const ListJobExecutionsForThingRequest &other);
    ListJobExecutionsForThingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListJobExecutionsForThingRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
