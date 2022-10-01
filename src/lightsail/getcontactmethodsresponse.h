// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTACTMETHODSRESPONSE_H
#define QTAWS_GETCONTACTMETHODSRESPONSE_H

#include "lightsailresponse.h"
#include "getcontactmethodsrequest.h"

namespace QtAws {
namespace Lightsail {

class GetContactMethodsResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetContactMethodsResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetContactMethodsResponse(const GetContactMethodsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetContactMethodsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetContactMethodsResponse)
    Q_DISABLE_COPY(GetContactMethodsResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
