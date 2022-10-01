// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDETECTORVERSIONRESPONSE_H
#define QTAWS_DELETEDETECTORVERSIONRESPONSE_H

#include "frauddetectorresponse.h"
#include "deletedetectorversionrequest.h"

namespace QtAws {
namespace FraudDetector {

class DeleteDetectorVersionResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT DeleteDetectorVersionResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    DeleteDetectorVersionResponse(const DeleteDetectorVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDetectorVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDetectorVersionResponse)
    Q_DISABLE_COPY(DeleteDetectorVersionResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
