// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATEMOBILESDKRELEASEURLRESPONSE_H
#define QTAWS_GENERATEMOBILESDKRELEASEURLRESPONSE_H

#include "wafv2response.h"
#include "generatemobilesdkreleaseurlrequest.h"

namespace QtAws {
namespace Wafv2 {

class GenerateMobileSdkReleaseUrlResponsePrivate;

class QTAWSWAFV2_EXPORT GenerateMobileSdkReleaseUrlResponse : public Wafv2Response {
    Q_OBJECT

public:
    GenerateMobileSdkReleaseUrlResponse(const GenerateMobileSdkReleaseUrlRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GenerateMobileSdkReleaseUrlRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GenerateMobileSdkReleaseUrlResponse)
    Q_DISABLE_COPY(GenerateMobileSdkReleaseUrlResponse)

};

} // namespace Wafv2
} // namespace QtAws

#endif
