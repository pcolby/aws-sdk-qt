// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEJOBSTATUSRESPONSE_H
#define QTAWS_UPDATEJOBSTATUSRESPONSE_H

#include "s3controlresponse.h"
#include "updatejobstatusrequest.h"

namespace QtAws {
namespace S3Control {

class UpdateJobStatusResponsePrivate;

class QTAWSS3CONTROL_EXPORT UpdateJobStatusResponse : public S3ControlResponse {
    Q_OBJECT

public:
    UpdateJobStatusResponse(const UpdateJobStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateJobStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateJobStatusResponse)
    Q_DISABLE_COPY(UpdateJobStatusResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
