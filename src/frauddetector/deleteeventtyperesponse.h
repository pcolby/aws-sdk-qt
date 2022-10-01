// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTTYPERESPONSE_H
#define QTAWS_DELETEEVENTTYPERESPONSE_H

#include "frauddetectorresponse.h"
#include "deleteeventtyperequest.h"

namespace QtAws {
namespace FraudDetector {

class DeleteEventTypeResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT DeleteEventTypeResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    DeleteEventTypeResponse(const DeleteEventTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteEventTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEventTypeResponse)
    Q_DISABLE_COPY(DeleteEventTypeResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
