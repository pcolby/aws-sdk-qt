// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPLOADARCHIVERESPONSE_H
#define QTAWS_UPLOADARCHIVERESPONSE_H

#include "glacierresponse.h"
#include "uploadarchiverequest.h"

namespace QtAws {
namespace Glacier {

class UploadArchiveResponsePrivate;

class QTAWSGLACIER_EXPORT UploadArchiveResponse : public GlacierResponse {
    Q_OBJECT

public:
    UploadArchiveResponse(const UploadArchiveRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UploadArchiveRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UploadArchiveResponse)
    Q_DISABLE_COPY(UploadArchiveResponse)

};

} // namespace Glacier
} // namespace QtAws

#endif
