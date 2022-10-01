// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONFIGRESPONSE_H
#define QTAWS_CREATECONFIGRESPONSE_H

#include "groundstationresponse.h"
#include "createconfigrequest.h"

namespace QtAws {
namespace GroundStation {

class CreateConfigResponsePrivate;

class QTAWSGROUNDSTATION_EXPORT CreateConfigResponse : public GroundStationResponse {
    Q_OBJECT

public:
    CreateConfigResponse(const CreateConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateConfigResponse)
    Q_DISABLE_COPY(CreateConfigResponse)

};

} // namespace GroundStation
} // namespace QtAws

#endif
