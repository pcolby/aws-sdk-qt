// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDETECTORVERSIONMETADATARESPONSE_H
#define QTAWS_UPDATEDETECTORVERSIONMETADATARESPONSE_H

#include "frauddetectorresponse.h"
#include "updatedetectorversionmetadatarequest.h"

namespace QtAws {
namespace FraudDetector {

class UpdateDetectorVersionMetadataResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT UpdateDetectorVersionMetadataResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    UpdateDetectorVersionMetadataResponse(const UpdateDetectorVersionMetadataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDetectorVersionMetadataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDetectorVersionMetadataResponse)
    Q_DISABLE_COPY(UpdateDetectorVersionMetadataResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
