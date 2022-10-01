// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTATICIPSRESPONSE_H
#define QTAWS_GETSTATICIPSRESPONSE_H

#include "lightsailresponse.h"
#include "getstaticipsrequest.h"

namespace QtAws {
namespace Lightsail {

class GetStaticIpsResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetStaticIpsResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetStaticIpsResponse(const GetStaticIpsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetStaticIpsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStaticIpsResponse)
    Q_DISABLE_COPY(GetStaticIpsResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
