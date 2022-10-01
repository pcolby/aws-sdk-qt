// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTSBYEVENTTYPERESPONSE_H
#define QTAWS_DELETEEVENTSBYEVENTTYPERESPONSE_H

#include "frauddetectorresponse.h"
#include "deleteeventsbyeventtyperequest.h"

namespace QtAws {
namespace FraudDetector {

class DeleteEventsByEventTypeResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT DeleteEventsByEventTypeResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    DeleteEventsByEventTypeResponse(const DeleteEventsByEventTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteEventsByEventTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEventsByEventTypeResponse)
    Q_DISABLE_COPY(DeleteEventsByEventTypeResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
