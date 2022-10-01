// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDETECTMITIGATIONACTIONSTASKSREQUEST_H
#define QTAWS_LISTDETECTMITIGATIONACTIONSTASKSREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class ListDetectMitigationActionsTasksRequestPrivate;

class QTAWSIOT_EXPORT ListDetectMitigationActionsTasksRequest : public IoTRequest {

public:
    ListDetectMitigationActionsTasksRequest(const ListDetectMitigationActionsTasksRequest &other);
    ListDetectMitigationActionsTasksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDetectMitigationActionsTasksRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
