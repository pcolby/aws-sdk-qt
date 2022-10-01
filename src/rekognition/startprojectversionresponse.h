// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTPROJECTVERSIONRESPONSE_H
#define QTAWS_STARTPROJECTVERSIONRESPONSE_H

#include "rekognitionresponse.h"
#include "startprojectversionrequest.h"

namespace QtAws {
namespace Rekognition {

class StartProjectVersionResponsePrivate;

class QTAWSREKOGNITION_EXPORT StartProjectVersionResponse : public RekognitionResponse {
    Q_OBJECT

public:
    StartProjectVersionResponse(const StartProjectVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartProjectVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartProjectVersionResponse)
    Q_DISABLE_COPY(StartProjectVersionResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif
