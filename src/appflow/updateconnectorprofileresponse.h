// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONNECTORPROFILERESPONSE_H
#define QTAWS_UPDATECONNECTORPROFILERESPONSE_H

#include "appflowresponse.h"
#include "updateconnectorprofilerequest.h"

namespace QtAws {
namespace Appflow {

class UpdateConnectorProfileResponsePrivate;

class QTAWSAPPFLOW_EXPORT UpdateConnectorProfileResponse : public AppflowResponse {
    Q_OBJECT

public:
    UpdateConnectorProfileResponse(const UpdateConnectorProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateConnectorProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateConnectorProfileResponse)
    Q_DISABLE_COPY(UpdateConnectorProfileResponse)

};

} // namespace Appflow
} // namespace QtAws

#endif
