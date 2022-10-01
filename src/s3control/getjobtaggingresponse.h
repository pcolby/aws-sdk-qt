// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBTAGGINGRESPONSE_H
#define QTAWS_GETJOBTAGGINGRESPONSE_H

#include "s3controlresponse.h"
#include "getjobtaggingrequest.h"

namespace QtAws {
namespace S3Control {

class GetJobTaggingResponsePrivate;

class QTAWSS3CONTROL_EXPORT GetJobTaggingResponse : public S3ControlResponse {
    Q_OBJECT

public:
    GetJobTaggingResponse(const GetJobTaggingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetJobTaggingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetJobTaggingResponse)
    Q_DISABLE_COPY(GetJobTaggingResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
