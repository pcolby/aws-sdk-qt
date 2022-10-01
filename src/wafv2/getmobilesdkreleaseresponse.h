// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMOBILESDKRELEASERESPONSE_H
#define QTAWS_GETMOBILESDKRELEASERESPONSE_H

#include "wafv2response.h"
#include "getmobilesdkreleaserequest.h"

namespace QtAws {
namespace Wafv2 {

class GetMobileSdkReleaseResponsePrivate;

class QTAWSWAFV2_EXPORT GetMobileSdkReleaseResponse : public Wafv2Response {
    Q_OBJECT

public:
    GetMobileSdkReleaseResponse(const GetMobileSdkReleaseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMobileSdkReleaseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMobileSdkReleaseResponse)
    Q_DISABLE_COPY(GetMobileSdkReleaseResponse)

};

} // namespace Wafv2
} // namespace QtAws

#endif
