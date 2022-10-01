// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOSEINSTANCEPUBLICPORTSRESPONSE_H
#define QTAWS_CLOSEINSTANCEPUBLICPORTSRESPONSE_H

#include "lightsailresponse.h"
#include "closeinstancepublicportsrequest.h"

namespace QtAws {
namespace Lightsail {

class CloseInstancePublicPortsResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT CloseInstancePublicPortsResponse : public LightsailResponse {
    Q_OBJECT

public:
    CloseInstancePublicPortsResponse(const CloseInstancePublicPortsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CloseInstancePublicPortsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CloseInstancePublicPortsResponse)
    Q_DISABLE_COPY(CloseInstancePublicPortsResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
