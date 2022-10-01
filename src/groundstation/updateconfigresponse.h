// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONFIGRESPONSE_H
#define QTAWS_UPDATECONFIGRESPONSE_H

#include "groundstationresponse.h"
#include "updateconfigrequest.h"

namespace QtAws {
namespace GroundStation {

class UpdateConfigResponsePrivate;

class QTAWSGROUNDSTATION_EXPORT UpdateConfigResponse : public GroundStationResponse {
    Q_OBJECT

public:
    UpdateConfigResponse(const UpdateConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateConfigResponse)
    Q_DISABLE_COPY(UpdateConfigResponse)

};

} // namespace GroundStation
} // namespace QtAws

#endif
