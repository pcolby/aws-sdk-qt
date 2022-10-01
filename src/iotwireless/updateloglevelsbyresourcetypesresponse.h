// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELOGLEVELSBYRESOURCETYPESRESPONSE_H
#define QTAWS_UPDATELOGLEVELSBYRESOURCETYPESRESPONSE_H

#include "iotwirelessresponse.h"
#include "updateloglevelsbyresourcetypesrequest.h"

namespace QtAws {
namespace IoTWireless {

class UpdateLogLevelsByResourceTypesResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT UpdateLogLevelsByResourceTypesResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    UpdateLogLevelsByResourceTypesResponse(const UpdateLogLevelsByResourceTypesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateLogLevelsByResourceTypesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLogLevelsByResourceTypesResponse)
    Q_DISABLE_COPY(UpdateLogLevelsByResourceTypesResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
