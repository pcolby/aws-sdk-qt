// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOPERATIONSFORRESOURCERESPONSE_H
#define QTAWS_GETOPERATIONSFORRESOURCERESPONSE_H

#include "lightsailresponse.h"
#include "getoperationsforresourcerequest.h"

namespace QtAws {
namespace Lightsail {

class GetOperationsForResourceResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetOperationsForResourceResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetOperationsForResourceResponse(const GetOperationsForResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetOperationsForResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOperationsForResourceResponse)
    Q_DISABLE_COPY(GetOperationsForResourceResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
