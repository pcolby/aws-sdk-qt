// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMODELVERSIONRESPONSE_H
#define QTAWS_CREATEMODELVERSIONRESPONSE_H

#include "frauddetectorresponse.h"
#include "createmodelversionrequest.h"

namespace QtAws {
namespace FraudDetector {

class CreateModelVersionResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT CreateModelVersionResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    CreateModelVersionResponse(const CreateModelVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateModelVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateModelVersionResponse)
    Q_DISABLE_COPY(CreateModelVersionResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
