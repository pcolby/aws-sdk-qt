// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAMPLINGTARGETSRESPONSE_H
#define QTAWS_GETSAMPLINGTARGETSRESPONSE_H

#include "xrayresponse.h"
#include "getsamplingtargetsrequest.h"

namespace QtAws {
namespace XRay {

class GetSamplingTargetsResponsePrivate;

class QTAWSXRAY_EXPORT GetSamplingTargetsResponse : public XRayResponse {
    Q_OBJECT

public:
    GetSamplingTargetsResponse(const GetSamplingTargetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSamplingTargetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSamplingTargetsResponse)
    Q_DISABLE_COPY(GetSamplingTargetsResponse)

};

} // namespace XRay
} // namespace QtAws

#endif
