// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPLICATIONLAYERAUTOMATICRESPONSERESPONSE_H
#define QTAWS_UPDATEAPPLICATIONLAYERAUTOMATICRESPONSERESPONSE_H

#include "shieldresponse.h"
#include "updateapplicationlayerautomaticresponserequest.h"

namespace QtAws {
namespace Shield {

class UpdateApplicationLayerAutomaticResponseResponsePrivate;

class QTAWSSHIELD_EXPORT UpdateApplicationLayerAutomaticResponseResponse : public ShieldResponse {
    Q_OBJECT

public:
    UpdateApplicationLayerAutomaticResponseResponse(const UpdateApplicationLayerAutomaticResponseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateApplicationLayerAutomaticResponseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateApplicationLayerAutomaticResponseResponse)
    Q_DISABLE_COPY(UpdateApplicationLayerAutomaticResponseResponse)

};

} // namespace Shield
} // namespace QtAws

#endif
