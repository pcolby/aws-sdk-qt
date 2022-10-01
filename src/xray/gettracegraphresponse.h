// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRACEGRAPHRESPONSE_H
#define QTAWS_GETTRACEGRAPHRESPONSE_H

#include "xrayresponse.h"
#include "gettracegraphrequest.h"

namespace QtAws {
namespace XRay {

class GetTraceGraphResponsePrivate;

class QTAWSXRAY_EXPORT GetTraceGraphResponse : public XRayResponse {
    Q_OBJECT

public:
    GetTraceGraphResponse(const GetTraceGraphRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTraceGraphRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTraceGraphResponse)
    Q_DISABLE_COPY(GetTraceGraphResponse)

};

} // namespace XRay
} // namespace QtAws

#endif
