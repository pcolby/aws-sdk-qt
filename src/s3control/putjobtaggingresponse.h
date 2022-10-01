// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTJOBTAGGINGRESPONSE_H
#define QTAWS_PUTJOBTAGGINGRESPONSE_H

#include "s3controlresponse.h"
#include "putjobtaggingrequest.h"

namespace QtAws {
namespace S3Control {

class PutJobTaggingResponsePrivate;

class QTAWSS3CONTROL_EXPORT PutJobTaggingResponse : public S3ControlResponse {
    Q_OBJECT

public:
    PutJobTaggingResponse(const PutJobTaggingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutJobTaggingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutJobTaggingResponse)
    Q_DISABLE_COPY(PutJobTaggingResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
