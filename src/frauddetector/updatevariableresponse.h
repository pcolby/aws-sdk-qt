// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVARIABLERESPONSE_H
#define QTAWS_UPDATEVARIABLERESPONSE_H

#include "frauddetectorresponse.h"
#include "updatevariablerequest.h"

namespace QtAws {
namespace FraudDetector {

class UpdateVariableResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT UpdateVariableResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    UpdateVariableResponse(const UpdateVariableRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateVariableRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateVariableResponse)
    Q_DISABLE_COPY(UpdateVariableResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
