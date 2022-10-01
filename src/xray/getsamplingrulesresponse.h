// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAMPLINGRULESRESPONSE_H
#define QTAWS_GETSAMPLINGRULESRESPONSE_H

#include "xrayresponse.h"
#include "getsamplingrulesrequest.h"

namespace QtAws {
namespace XRay {

class GetSamplingRulesResponsePrivate;

class QTAWSXRAY_EXPORT GetSamplingRulesResponse : public XRayResponse {
    Q_OBJECT

public:
    GetSamplingRulesResponse(const GetSamplingRulesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSamplingRulesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSamplingRulesResponse)
    Q_DISABLE_COPY(GetSamplingRulesResponse)

};

} // namespace XRay
} // namespace QtAws

#endif
