// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEJOBPRIORITYRESPONSE_H
#define QTAWS_UPDATEJOBPRIORITYRESPONSE_H

#include "s3controlresponse.h"
#include "updatejobpriorityrequest.h"

namespace QtAws {
namespace S3Control {

class UpdateJobPriorityResponsePrivate;

class QTAWSS3CONTROL_EXPORT UpdateJobPriorityResponse : public S3ControlResponse {
    Q_OBJECT

public:
    UpdateJobPriorityResponse(const UpdateJobPriorityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateJobPriorityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateJobPriorityResponse)
    Q_DISABLE_COPY(UpdateJobPriorityResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
