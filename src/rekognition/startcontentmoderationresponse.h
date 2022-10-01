// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCONTENTMODERATIONRESPONSE_H
#define QTAWS_STARTCONTENTMODERATIONRESPONSE_H

#include "rekognitionresponse.h"
#include "startcontentmoderationrequest.h"

namespace QtAws {
namespace Rekognition {

class StartContentModerationResponsePrivate;

class QTAWSREKOGNITION_EXPORT StartContentModerationResponse : public RekognitionResponse {
    Q_OBJECT

public:
    StartContentModerationResponse(const StartContentModerationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartContentModerationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartContentModerationResponse)
    Q_DISABLE_COPY(StartContentModerationResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif
