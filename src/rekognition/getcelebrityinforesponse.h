// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCELEBRITYINFORESPONSE_H
#define QTAWS_GETCELEBRITYINFORESPONSE_H

#include "rekognitionresponse.h"
#include "getcelebrityinforequest.h"

namespace QtAws {
namespace Rekognition {

class GetCelebrityInfoResponsePrivate;

class QTAWSREKOGNITION_EXPORT GetCelebrityInfoResponse : public RekognitionResponse {
    Q_OBJECT

public:
    GetCelebrityInfoResponse(const GetCelebrityInfoRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCelebrityInfoRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCelebrityInfoResponse)
    Q_DISABLE_COPY(GetCelebrityInfoResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif
