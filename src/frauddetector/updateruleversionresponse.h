// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERULEVERSIONRESPONSE_H
#define QTAWS_UPDATERULEVERSIONRESPONSE_H

#include "frauddetectorresponse.h"
#include "updateruleversionrequest.h"

namespace QtAws {
namespace FraudDetector {

class UpdateRuleVersionResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT UpdateRuleVersionResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    UpdateRuleVersionResponse(const UpdateRuleVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRuleVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRuleVersionResponse)
    Q_DISABLE_COPY(UpdateRuleVersionResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
