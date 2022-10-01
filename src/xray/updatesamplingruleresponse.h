// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESAMPLINGRULERESPONSE_H
#define QTAWS_UPDATESAMPLINGRULERESPONSE_H

#include "xrayresponse.h"
#include "updatesamplingrulerequest.h"

namespace QtAws {
namespace XRay {

class UpdateSamplingRuleResponsePrivate;

class QTAWSXRAY_EXPORT UpdateSamplingRuleResponse : public XRayResponse {
    Q_OBJECT

public:
    UpdateSamplingRuleResponse(const UpdateSamplingRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSamplingRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSamplingRuleResponse)
    Q_DISABLE_COPY(UpdateSamplingRuleResponse)

};

} // namespace XRay
} // namespace QtAws

#endif
