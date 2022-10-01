// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHSTATICIPRESPONSE_H
#define QTAWS_DETACHSTATICIPRESPONSE_H

#include "lightsailresponse.h"
#include "detachstaticiprequest.h"

namespace QtAws {
namespace Lightsail {

class DetachStaticIpResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT DetachStaticIpResponse : public LightsailResponse {
    Q_OBJECT

public:
    DetachStaticIpResponse(const DetachStaticIpRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DetachStaticIpRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachStaticIpResponse)
    Q_DISABLE_COPY(DetachStaticIpResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
