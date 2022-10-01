// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLABELRESPONSE_H
#define QTAWS_PUTLABELRESPONSE_H

#include "frauddetectorresponse.h"
#include "putlabelrequest.h"

namespace QtAws {
namespace FraudDetector {

class PutLabelResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT PutLabelResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    PutLabelResponse(const PutLabelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutLabelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutLabelResponse)
    Q_DISABLE_COPY(PutLabelResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
