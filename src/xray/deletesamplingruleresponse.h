// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESAMPLINGRULERESPONSE_H
#define QTAWS_DELETESAMPLINGRULERESPONSE_H

#include "xrayresponse.h"
#include "deletesamplingrulerequest.h"

namespace QtAws {
namespace XRay {

class DeleteSamplingRuleResponsePrivate;

class QTAWSXRAY_EXPORT DeleteSamplingRuleResponse : public XRayResponse {
    Q_OBJECT

public:
    DeleteSamplingRuleResponse(const DeleteSamplingRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSamplingRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSamplingRuleResponse)
    Q_DISABLE_COPY(DeleteSamplingRuleResponse)

};

} // namespace XRay
} // namespace QtAws

#endif
