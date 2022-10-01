// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEVENTTYPERESPONSE_H
#define QTAWS_PUTEVENTTYPERESPONSE_H

#include "frauddetectorresponse.h"
#include "puteventtyperequest.h"

namespace QtAws {
namespace FraudDetector {

class PutEventTypeResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT PutEventTypeResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    PutEventTypeResponse(const PutEventTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutEventTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutEventTypeResponse)
    Q_DISABLE_COPY(PutEventTypeResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
