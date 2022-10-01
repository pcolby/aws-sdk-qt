// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTENTMODERATIONRESPONSE_H
#define QTAWS_GETCONTENTMODERATIONRESPONSE_H

#include "rekognitionresponse.h"
#include "getcontentmoderationrequest.h"

namespace QtAws {
namespace Rekognition {

class GetContentModerationResponsePrivate;

class QTAWSREKOGNITION_EXPORT GetContentModerationResponse : public RekognitionResponse {
    Q_OBJECT

public:
    GetContentModerationResponse(const GetContentModerationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetContentModerationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetContentModerationResponse)
    Q_DISABLE_COPY(GetContentModerationResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif
