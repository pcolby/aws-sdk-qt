// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RECOGNIZECELEBRITIESRESPONSE_H
#define QTAWS_RECOGNIZECELEBRITIESRESPONSE_H

#include "rekognitionresponse.h"
#include "recognizecelebritiesrequest.h"

namespace QtAws {
namespace Rekognition {

class RecognizeCelebritiesResponsePrivate;

class QTAWSREKOGNITION_EXPORT RecognizeCelebritiesResponse : public RekognitionResponse {
    Q_OBJECT

public:
    RecognizeCelebritiesResponse(const RecognizeCelebritiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RecognizeCelebritiesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RecognizeCelebritiesResponse)
    Q_DISABLE_COPY(RecognizeCelebritiesResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif
