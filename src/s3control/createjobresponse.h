// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEJOBRESPONSE_H
#define QTAWS_CREATEJOBRESPONSE_H

#include "s3controlresponse.h"
#include "createjobrequest.h"

namespace QtAws {
namespace S3Control {

class CreateJobResponsePrivate;

class QTAWSS3CONTROL_EXPORT CreateJobResponse : public S3ControlResponse {
    Q_OBJECT

public:
    CreateJobResponse(const CreateJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateJobResponse)
    Q_DISABLE_COPY(CreateJobResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
