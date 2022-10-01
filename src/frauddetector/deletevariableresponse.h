// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVARIABLERESPONSE_H
#define QTAWS_DELETEVARIABLERESPONSE_H

#include "frauddetectorresponse.h"
#include "deletevariablerequest.h"

namespace QtAws {
namespace FraudDetector {

class DeleteVariableResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT DeleteVariableResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    DeleteVariableResponse(const DeleteVariableRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteVariableRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVariableResponse)
    Q_DISABLE_COPY(DeleteVariableResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
