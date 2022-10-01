// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEAPPLICATIONLAYERAUTOMATICRESPONSERESPONSE_H
#define QTAWS_DISABLEAPPLICATIONLAYERAUTOMATICRESPONSERESPONSE_H

#include "shieldresponse.h"
#include "disableapplicationlayerautomaticresponserequest.h"

namespace QtAws {
namespace Shield {

class DisableApplicationLayerAutomaticResponseResponsePrivate;

class QTAWSSHIELD_EXPORT DisableApplicationLayerAutomaticResponseResponse : public ShieldResponse {
    Q_OBJECT

public:
    DisableApplicationLayerAutomaticResponseResponse(const DisableApplicationLayerAutomaticResponseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableApplicationLayerAutomaticResponseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableApplicationLayerAutomaticResponseResponse)
    Q_DISABLE_COPY(DisableApplicationLayerAutomaticResponseResponse)

};

} // namespace Shield
} // namespace QtAws

#endif
