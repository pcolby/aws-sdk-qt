// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHSTATICIPRESPONSE_H
#define QTAWS_ATTACHSTATICIPRESPONSE_H

#include "lightsailresponse.h"
#include "attachstaticiprequest.h"

namespace QtAws {
namespace Lightsail {

class AttachStaticIpResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT AttachStaticIpResponse : public LightsailResponse {
    Q_OBJECT

public:
    AttachStaticIpResponse(const AttachStaticIpRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AttachStaticIpRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachStaticIpResponse)
    Q_DISABLE_COPY(AttachStaticIpResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
