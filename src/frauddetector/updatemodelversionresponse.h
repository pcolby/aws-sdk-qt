// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMODELVERSIONRESPONSE_H
#define QTAWS_UPDATEMODELVERSIONRESPONSE_H

#include "frauddetectorresponse.h"
#include "updatemodelversionrequest.h"

namespace QtAws {
namespace FraudDetector {

class UpdateModelVersionResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT UpdateModelVersionResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    UpdateModelVersionResponse(const UpdateModelVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateModelVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateModelVersionResponse)
    Q_DISABLE_COPY(UpdateModelVersionResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
