// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WRITEGETOBJECTRESPONSERESPONSE_H
#define QTAWS_WRITEGETOBJECTRESPONSERESPONSE_H

#include "s3response.h"
#include "writegetobjectresponserequest.h"

namespace QtAws {
namespace S3 {

class WriteGetObjectResponseResponsePrivate;

class QTAWSS3_EXPORT WriteGetObjectResponseResponse : public S3Response {
    Q_OBJECT

public:
    WriteGetObjectResponseResponse(const WriteGetObjectResponseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const WriteGetObjectResponseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(WriteGetObjectResponseResponse)
    Q_DISABLE_COPY(WriteGetObjectResponseResponse)

};

} // namespace S3
} // namespace QtAws

#endif
