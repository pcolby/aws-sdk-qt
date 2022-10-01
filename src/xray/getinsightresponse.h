// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSIGHTRESPONSE_H
#define QTAWS_GETINSIGHTRESPONSE_H

#include "xrayresponse.h"
#include "getinsightrequest.h"

namespace QtAws {
namespace XRay {

class GetInsightResponsePrivate;

class QTAWSXRAY_EXPORT GetInsightResponse : public XRayResponse {
    Q_OBJECT

public:
    GetInsightResponse(const GetInsightRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetInsightRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInsightResponse)
    Q_DISABLE_COPY(GetInsightResponse)

};

} // namespace XRay
} // namespace QtAws

#endif
