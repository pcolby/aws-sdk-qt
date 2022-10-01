// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPLATFORMAPPLICATIONATTRIBUTESRESPONSE_H
#define QTAWS_GETPLATFORMAPPLICATIONATTRIBUTESRESPONSE_H

#include "snsresponse.h"
#include "getplatformapplicationattributesrequest.h"

namespace QtAws {
namespace Sns {

class GetPlatformApplicationAttributesResponsePrivate;

class QTAWSSNS_EXPORT GetPlatformApplicationAttributesResponse : public SnsResponse {
    Q_OBJECT

public:
    GetPlatformApplicationAttributesResponse(const GetPlatformApplicationAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPlatformApplicationAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPlatformApplicationAttributesResponse)
    Q_DISABLE_COPY(GetPlatformApplicationAttributesResponse)

};

} // namespace Sns
} // namespace QtAws

#endif
