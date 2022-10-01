// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDETECTORVERSIONRESPONSE_H
#define QTAWS_CREATEDETECTORVERSIONRESPONSE_H

#include "frauddetectorresponse.h"
#include "createdetectorversionrequest.h"

namespace QtAws {
namespace FraudDetector {

class CreateDetectorVersionResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT CreateDetectorVersionResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    CreateDetectorVersionResponse(const CreateDetectorVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDetectorVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDetectorVersionResponse)
    Q_DISABLE_COPY(CreateDetectorVersionResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
