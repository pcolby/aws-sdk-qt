// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEADDONRESPONSE_H
#define QTAWS_ENABLEADDONRESPONSE_H

#include "lightsailresponse.h"
#include "enableaddonrequest.h"

namespace QtAws {
namespace Lightsail {

class EnableAddOnResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT EnableAddOnResponse : public LightsailResponse {
    Q_OBJECT

public:
    EnableAddOnResponse(const EnableAddOnRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableAddOnRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableAddOnResponse)
    Q_DISABLE_COPY(EnableAddOnResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
