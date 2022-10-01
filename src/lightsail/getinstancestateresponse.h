// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCESTATERESPONSE_H
#define QTAWS_GETINSTANCESTATERESPONSE_H

#include "lightsailresponse.h"
#include "getinstancestaterequest.h"

namespace QtAws {
namespace Lightsail {

class GetInstanceStateResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetInstanceStateResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetInstanceStateResponse(const GetInstanceStateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetInstanceStateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInstanceStateResponse)
    Q_DISABLE_COPY(GetInstanceStateResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
