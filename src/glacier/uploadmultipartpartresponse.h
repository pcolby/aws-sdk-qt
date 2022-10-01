// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPLOADMULTIPARTPARTRESPONSE_H
#define QTAWS_UPLOADMULTIPARTPARTRESPONSE_H

#include "glacierresponse.h"
#include "uploadmultipartpartrequest.h"

namespace QtAws {
namespace Glacier {

class UploadMultipartPartResponsePrivate;

class QTAWSGLACIER_EXPORT UploadMultipartPartResponse : public GlacierResponse {
    Q_OBJECT

public:
    UploadMultipartPartResponse(const UploadMultipartPartRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UploadMultipartPartRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UploadMultipartPartResponse)
    Q_DISABLE_COPY(UploadMultipartPartResponse)

};

} // namespace Glacier
} // namespace QtAws

#endif
