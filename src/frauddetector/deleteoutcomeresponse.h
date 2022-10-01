// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOUTCOMERESPONSE_H
#define QTAWS_DELETEOUTCOMERESPONSE_H

#include "frauddetectorresponse.h"
#include "deleteoutcomerequest.h"

namespace QtAws {
namespace FraudDetector {

class DeleteOutcomeResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT DeleteOutcomeResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    DeleteOutcomeResponse(const DeleteOutcomeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteOutcomeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteOutcomeResponse)
    Q_DISABLE_COPY(DeleteOutcomeResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
