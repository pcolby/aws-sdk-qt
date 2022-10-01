// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTAINERLOGRESPONSE_H
#define QTAWS_GETCONTAINERLOGRESPONSE_H

#include "lightsailresponse.h"
#include "getcontainerlogrequest.h"

namespace QtAws {
namespace Lightsail {

class GetContainerLogResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetContainerLogResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetContainerLogResponse(const GetContainerLogRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetContainerLogRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetContainerLogResponse)
    Q_DISABLE_COPY(GetContainerLogResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
