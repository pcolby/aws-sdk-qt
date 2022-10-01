// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_OPENINSTANCEPUBLICPORTSRESPONSE_H
#define QTAWS_OPENINSTANCEPUBLICPORTSRESPONSE_H

#include "lightsailresponse.h"
#include "openinstancepublicportsrequest.h"

namespace QtAws {
namespace Lightsail {

class OpenInstancePublicPortsResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT OpenInstancePublicPortsResponse : public LightsailResponse {
    Q_OBJECT

public:
    OpenInstancePublicPortsResponse(const OpenInstancePublicPortsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const OpenInstancePublicPortsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(OpenInstancePublicPortsResponse)
    Q_DISABLE_COPY(OpenInstancePublicPortsResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
