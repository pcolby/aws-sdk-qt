// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTRESPONSE_H
#define QTAWS_DELETEEVENTRESPONSE_H

#include "frauddetectorresponse.h"
#include "deleteeventrequest.h"

namespace QtAws {
namespace FraudDetector {

class DeleteEventResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT DeleteEventResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    DeleteEventResponse(const DeleteEventRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteEventRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEventResponse)
    Q_DISABLE_COPY(DeleteEventResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
