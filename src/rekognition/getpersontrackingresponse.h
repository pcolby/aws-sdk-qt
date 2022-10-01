// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPERSONTRACKINGRESPONSE_H
#define QTAWS_GETPERSONTRACKINGRESPONSE_H

#include "rekognitionresponse.h"
#include "getpersontrackingrequest.h"

namespace QtAws {
namespace Rekognition {

class GetPersonTrackingResponsePrivate;

class QTAWSREKOGNITION_EXPORT GetPersonTrackingResponse : public RekognitionResponse {
    Q_OBJECT

public:
    GetPersonTrackingResponse(const GetPersonTrackingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPersonTrackingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPersonTrackingResponse)
    Q_DISABLE_COPY(GetPersonTrackingResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif
