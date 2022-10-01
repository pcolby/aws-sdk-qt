// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICEGRAPHRESPONSE_H
#define QTAWS_GETSERVICEGRAPHRESPONSE_H

#include "xrayresponse.h"
#include "getservicegraphrequest.h"

namespace QtAws {
namespace XRay {

class GetServiceGraphResponsePrivate;

class QTAWSXRAY_EXPORT GetServiceGraphResponse : public XRayResponse {
    Q_OBJECT

public:
    GetServiceGraphResponse(const GetServiceGraphRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetServiceGraphRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetServiceGraphResponse)
    Q_DISABLE_COPY(GetServiceGraphResponse)

};

} // namespace XRay
} // namespace QtAws

#endif
