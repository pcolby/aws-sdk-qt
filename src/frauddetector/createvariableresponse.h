// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVARIABLERESPONSE_H
#define QTAWS_CREATEVARIABLERESPONSE_H

#include "frauddetectorresponse.h"
#include "createvariablerequest.h"

namespace QtAws {
namespace FraudDetector {

class CreateVariableResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT CreateVariableResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    CreateVariableResponse(const CreateVariableRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateVariableRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVariableResponse)
    Q_DISABLE_COPY(CreateVariableResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
