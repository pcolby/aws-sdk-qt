// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEJOBTAGGINGRESPONSE_H
#define QTAWS_DELETEJOBTAGGINGRESPONSE_H

#include "s3controlresponse.h"
#include "deletejobtaggingrequest.h"

namespace QtAws {
namespace S3Control {

class DeleteJobTaggingResponsePrivate;

class QTAWSS3CONTROL_EXPORT DeleteJobTaggingResponse : public S3ControlResponse {
    Q_OBJECT

public:
    DeleteJobTaggingResponse(const DeleteJobTaggingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteJobTaggingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteJobTaggingResponse)
    Q_DISABLE_COPY(DeleteJobTaggingResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
