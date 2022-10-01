// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCONTENTUPLOADRESPONSE_H
#define QTAWS_STARTCONTENTUPLOADRESPONSE_H

#include "wisdomresponse.h"
#include "startcontentuploadrequest.h"

namespace QtAws {
namespace Wisdom {

class StartContentUploadResponsePrivate;

class QTAWSWISDOM_EXPORT StartContentUploadResponse : public WisdomResponse {
    Q_OBJECT

public:
    StartContentUploadResponse(const StartContentUploadRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartContentUploadRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartContentUploadResponse)
    Q_DISABLE_COPY(StartContentUploadResponse)

};

} // namespace Wisdom
} // namespace QtAws

#endif
