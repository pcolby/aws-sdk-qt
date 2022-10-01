// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUNDLESRESPONSE_H
#define QTAWS_GETBUNDLESRESPONSE_H

#include "lightsailresponse.h"
#include "getbundlesrequest.h"

namespace QtAws {
namespace Lightsail {

class GetBundlesResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetBundlesResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetBundlesResponse(const GetBundlesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBundlesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBundlesResponse)
    Q_DISABLE_COPY(GetBundlesResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
