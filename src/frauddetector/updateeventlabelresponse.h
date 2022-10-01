// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEVENTLABELRESPONSE_H
#define QTAWS_UPDATEEVENTLABELRESPONSE_H

#include "frauddetectorresponse.h"
#include "updateeventlabelrequest.h"

namespace QtAws {
namespace FraudDetector {

class UpdateEventLabelResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT UpdateEventLabelResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    UpdateEventLabelResponse(const UpdateEventLabelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateEventLabelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEventLabelResponse)
    Q_DISABLE_COPY(UpdateEventLabelResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
