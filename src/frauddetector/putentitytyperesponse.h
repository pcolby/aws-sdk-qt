// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTENTITYTYPERESPONSE_H
#define QTAWS_PUTENTITYTYPERESPONSE_H

#include "frauddetectorresponse.h"
#include "putentitytyperequest.h"

namespace QtAws {
namespace FraudDetector {

class PutEntityTypeResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT PutEntityTypeResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    PutEntityTypeResponse(const PutEntityTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutEntityTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutEntityTypeResponse)
    Q_DISABLE_COPY(PutEntityTypeResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
