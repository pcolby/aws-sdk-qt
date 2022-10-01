// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCEACCESSDETAILSRESPONSE_H
#define QTAWS_GETINSTANCEACCESSDETAILSRESPONSE_H

#include "lightsailresponse.h"
#include "getinstanceaccessdetailsrequest.h"

namespace QtAws {
namespace Lightsail {

class GetInstanceAccessDetailsResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetInstanceAccessDetailsResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetInstanceAccessDetailsResponse(const GetInstanceAccessDetailsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetInstanceAccessDetailsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInstanceAccessDetailsResponse)
    Q_DISABLE_COPY(GetInstanceAccessDetailsResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
