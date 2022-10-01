// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTATICIPRESPONSE_H
#define QTAWS_GETSTATICIPRESPONSE_H

#include "lightsailresponse.h"
#include "getstaticiprequest.h"

namespace QtAws {
namespace Lightsail {

class GetStaticIpResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetStaticIpResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetStaticIpResponse(const GetStaticIpRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetStaticIpRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStaticIpResponse)
    Q_DISABLE_COPY(GetStaticIpResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
