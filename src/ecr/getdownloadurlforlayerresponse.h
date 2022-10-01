// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOWNLOADURLFORLAYERRESPONSE_H
#define QTAWS_GETDOWNLOADURLFORLAYERRESPONSE_H

#include "ecrresponse.h"
#include "getdownloadurlforlayerrequest.h"

namespace QtAws {
namespace Ecr {

class GetDownloadUrlForLayerResponsePrivate;

class QTAWSECR_EXPORT GetDownloadUrlForLayerResponse : public EcrResponse {
    Q_OBJECT

public:
    GetDownloadUrlForLayerResponse(const GetDownloadUrlForLayerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDownloadUrlForLayerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDownloadUrlForLayerResponse)
    Q_DISABLE_COPY(GetDownloadUrlForLayerResponse)

};

} // namespace Ecr
} // namespace QtAws

#endif
