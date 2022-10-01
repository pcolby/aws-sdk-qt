// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETPLATFORMAPPLICATIONATTRIBUTESRESPONSE_H
#define QTAWS_SETPLATFORMAPPLICATIONATTRIBUTESRESPONSE_H

#include "snsresponse.h"
#include "setplatformapplicationattributesrequest.h"

namespace QtAws {
namespace Sns {

class SetPlatformApplicationAttributesResponsePrivate;

class QTAWSSNS_EXPORT SetPlatformApplicationAttributesResponse : public SnsResponse {
    Q_OBJECT

public:
    SetPlatformApplicationAttributesResponse(const SetPlatformApplicationAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetPlatformApplicationAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetPlatformApplicationAttributesResponse)
    Q_DISABLE_COPY(SetPlatformApplicationAttributesResponse)

};

} // namespace Sns
} // namespace QtAws

#endif
