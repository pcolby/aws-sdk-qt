// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEAPPLICATIONLAYERAUTOMATICRESPONSERESPONSE_H
#define QTAWS_ENABLEAPPLICATIONLAYERAUTOMATICRESPONSERESPONSE_H

#include "shieldresponse.h"
#include "enableapplicationlayerautomaticresponserequest.h"

namespace QtAws {
namespace Shield {

class EnableApplicationLayerAutomaticResponseResponsePrivate;

class QTAWSSHIELD_EXPORT EnableApplicationLayerAutomaticResponseResponse : public ShieldResponse {
    Q_OBJECT

public:
    EnableApplicationLayerAutomaticResponseResponse(const EnableApplicationLayerAutomaticResponseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableApplicationLayerAutomaticResponseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableApplicationLayerAutomaticResponseResponse)
    Q_DISABLE_COPY(EnableApplicationLayerAutomaticResponseResponse)

};

} // namespace Shield
} // namespace QtAws

#endif
