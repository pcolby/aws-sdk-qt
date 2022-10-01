// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONNECTORPROFILERESPONSE_H
#define QTAWS_DELETECONNECTORPROFILERESPONSE_H

#include "appflowresponse.h"
#include "deleteconnectorprofilerequest.h"

namespace QtAws {
namespace Appflow {

class DeleteConnectorProfileResponsePrivate;

class QTAWSAPPFLOW_EXPORT DeleteConnectorProfileResponse : public AppflowResponse {
    Q_OBJECT

public:
    DeleteConnectorProfileResponse(const DeleteConnectorProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteConnectorProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteConnectorProfileResponse)
    Q_DISABLE_COPY(DeleteConnectorProfileResponse)

};

} // namespace Appflow
} // namespace QtAws

#endif
