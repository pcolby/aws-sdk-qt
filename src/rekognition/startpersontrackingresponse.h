// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTPERSONTRACKINGRESPONSE_H
#define QTAWS_STARTPERSONTRACKINGRESPONSE_H

#include "rekognitionresponse.h"
#include "startpersontrackingrequest.h"

namespace QtAws {
namespace Rekognition {

class StartPersonTrackingResponsePrivate;

class QTAWSREKOGNITION_EXPORT StartPersonTrackingResponse : public RekognitionResponse {
    Q_OBJECT

public:
    StartPersonTrackingResponse(const StartPersonTrackingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartPersonTrackingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartPersonTrackingResponse)
    Q_DISABLE_COPY(StartPersonTrackingResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif
