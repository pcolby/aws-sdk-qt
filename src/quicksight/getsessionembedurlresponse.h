// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSESSIONEMBEDURLRESPONSE_H
#define QTAWS_GETSESSIONEMBEDURLRESPONSE_H

#include "quicksightresponse.h"
#include "getsessionembedurlrequest.h"

namespace QtAws {
namespace QuickSight {

class GetSessionEmbedUrlResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT GetSessionEmbedUrlResponse : public QuickSightResponse {
    Q_OBJECT

public:
    GetSessionEmbedUrlResponse(const GetSessionEmbedUrlRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSessionEmbedUrlRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSessionEmbedUrlResponse)
    Q_DISABLE_COPY(GetSessionEmbedUrlResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
