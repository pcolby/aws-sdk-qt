// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERULEMETADATARESPONSE_H
#define QTAWS_UPDATERULEMETADATARESPONSE_H

#include "frauddetectorresponse.h"
#include "updaterulemetadatarequest.h"

namespace QtAws {
namespace FraudDetector {

class UpdateRuleMetadataResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT UpdateRuleMetadataResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    UpdateRuleMetadataResponse(const UpdateRuleMetadataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRuleMetadataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRuleMetadataResponse)
    Q_DISABLE_COPY(UpdateRuleMetadataResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
