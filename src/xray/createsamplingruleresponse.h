// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESAMPLINGRULERESPONSE_H
#define QTAWS_CREATESAMPLINGRULERESPONSE_H

#include "xrayresponse.h"
#include "createsamplingrulerequest.h"

namespace QtAws {
namespace XRay {

class CreateSamplingRuleResponsePrivate;

class QTAWSXRAY_EXPORT CreateSamplingRuleResponse : public XRayResponse {
    Q_OBJECT

public:
    CreateSamplingRuleResponse(const CreateSamplingRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSamplingRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSamplingRuleResponse)
    Q_DISABLE_COPY(CreateSamplingRuleResponse)

};

} // namespace XRay
} // namespace QtAws

#endif
