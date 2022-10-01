// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONNECTORPROFILERESPONSE_H
#define QTAWS_CREATECONNECTORPROFILERESPONSE_H

#include "appflowresponse.h"
#include "createconnectorprofilerequest.h"

namespace QtAws {
namespace Appflow {

class CreateConnectorProfileResponsePrivate;

class QTAWSAPPFLOW_EXPORT CreateConnectorProfileResponse : public AppflowResponse {
    Q_OBJECT

public:
    CreateConnectorProfileResponse(const CreateConnectorProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateConnectorProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateConnectorProfileResponse)
    Q_DISABLE_COPY(CreateConnectorProfileResponse)

};

} // namespace Appflow
} // namespace QtAws

#endif
