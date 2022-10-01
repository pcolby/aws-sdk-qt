// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETHINGREGISTRATIONTASKRESPONSE_H
#define QTAWS_DESCRIBETHINGREGISTRATIONTASKRESPONSE_H

#include "iotresponse.h"
#include "describethingregistrationtaskrequest.h"

namespace QtAws {
namespace IoT {

class DescribeThingRegistrationTaskResponsePrivate;

class QTAWSIOT_EXPORT DescribeThingRegistrationTaskResponse : public IoTResponse {
    Q_OBJECT

public:
    DescribeThingRegistrationTaskResponse(const DescribeThingRegistrationTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeThingRegistrationTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeThingRegistrationTaskResponse)
    Q_DISABLE_COPY(DescribeThingRegistrationTaskResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
