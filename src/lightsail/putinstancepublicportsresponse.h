// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTINSTANCEPUBLICPORTSRESPONSE_H
#define QTAWS_PUTINSTANCEPUBLICPORTSRESPONSE_H

#include "lightsailresponse.h"
#include "putinstancepublicportsrequest.h"

namespace QtAws {
namespace Lightsail {

class PutInstancePublicPortsResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT PutInstancePublicPortsResponse : public LightsailResponse {
    Q_OBJECT

public:
    PutInstancePublicPortsResponse(const PutInstancePublicPortsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutInstancePublicPortsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutInstancePublicPortsResponse)
    Q_DISABLE_COPY(PutInstancePublicPortsResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
