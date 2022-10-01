// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOPERATIONSRESPONSE_H
#define QTAWS_GETOPERATIONSRESPONSE_H

#include "lightsailresponse.h"
#include "getoperationsrequest.h"

namespace QtAws {
namespace Lightsail {

class GetOperationsResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetOperationsResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetOperationsResponse(const GetOperationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetOperationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOperationsResponse)
    Q_DISABLE_COPY(GetOperationsResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
