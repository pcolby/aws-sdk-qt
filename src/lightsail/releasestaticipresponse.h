// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RELEASESTATICIPRESPONSE_H
#define QTAWS_RELEASESTATICIPRESPONSE_H

#include "lightsailresponse.h"
#include "releasestaticiprequest.h"

namespace QtAws {
namespace Lightsail {

class ReleaseStaticIpResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT ReleaseStaticIpResponse : public LightsailResponse {
    Q_OBJECT

public:
    ReleaseStaticIpResponse(const ReleaseStaticIpRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ReleaseStaticIpRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReleaseStaticIpResponse)
    Q_DISABLE_COPY(ReleaseStaticIpResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
