// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPPROJECTVERSIONRESPONSE_H
#define QTAWS_STOPPROJECTVERSIONRESPONSE_H

#include "rekognitionresponse.h"
#include "stopprojectversionrequest.h"

namespace QtAws {
namespace Rekognition {

class StopProjectVersionResponsePrivate;

class QTAWSREKOGNITION_EXPORT StopProjectVersionResponse : public RekognitionResponse {
    Q_OBJECT

public:
    StopProjectVersionResponse(const StopProjectVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopProjectVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopProjectVersionResponse)
    Q_DISABLE_COPY(StopProjectVersionResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif
