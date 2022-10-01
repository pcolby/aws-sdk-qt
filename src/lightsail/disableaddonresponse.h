// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEADDONRESPONSE_H
#define QTAWS_DISABLEADDONRESPONSE_H

#include "lightsailresponse.h"
#include "disableaddonrequest.h"

namespace QtAws {
namespace Lightsail {

class DisableAddOnResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT DisableAddOnResponse : public LightsailResponse {
    Q_OBJECT

public:
    DisableAddOnResponse(const DisableAddOnRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableAddOnRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableAddOnResponse)
    Q_DISABLE_COPY(DisableAddOnResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
