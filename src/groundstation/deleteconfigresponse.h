// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGRESPONSE_H
#define QTAWS_DELETECONFIGRESPONSE_H

#include "groundstationresponse.h"
#include "deleteconfigrequest.h"

namespace QtAws {
namespace GroundStation {

class DeleteConfigResponsePrivate;

class QTAWSGROUNDSTATION_EXPORT DeleteConfigResponse : public GroundStationResponse {
    Q_OBJECT

public:
    DeleteConfigResponse(const DeleteConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteConfigResponse)
    Q_DISABLE_COPY(DeleteConfigResponse)

};

} // namespace GroundStation
} // namespace QtAws

#endif
