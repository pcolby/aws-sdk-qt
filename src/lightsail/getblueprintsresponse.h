// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBLUEPRINTSRESPONSE_H
#define QTAWS_GETBLUEPRINTSRESPONSE_H

#include "lightsailresponse.h"
#include "getblueprintsrequest.h"

namespace QtAws {
namespace Lightsail {

class GetBlueprintsResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetBlueprintsResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetBlueprintsResponse(const GetBlueprintsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBlueprintsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBlueprintsResponse)
    Q_DISABLE_COPY(GetBlueprintsResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
