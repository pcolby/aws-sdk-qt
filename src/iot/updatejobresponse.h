// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEJOBRESPONSE_H
#define QTAWS_UPDATEJOBRESPONSE_H

#include "iotresponse.h"
#include "updatejobrequest.h"

namespace QtAws {
namespace IoT {

class UpdateJobResponsePrivate;

class QTAWSIOT_EXPORT UpdateJobResponse : public IoTResponse {
    Q_OBJECT

public:
    UpdateJobResponse(const UpdateJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateJobResponse)
    Q_DISABLE_COPY(UpdateJobResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
