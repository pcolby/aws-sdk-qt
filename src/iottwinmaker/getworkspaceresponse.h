// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKSPACERESPONSE_H
#define QTAWS_GETWORKSPACERESPONSE_H

#include "iottwinmakerresponse.h"
#include "getworkspacerequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class GetWorkspaceResponsePrivate;

class QTAWSIOTTWINMAKER_EXPORT GetWorkspaceResponse : public IoTTwinMakerResponse {
    Q_OBJECT

public:
    GetWorkspaceResponse(const GetWorkspaceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetWorkspaceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetWorkspaceResponse)
    Q_DISABLE_COPY(GetWorkspaceResponse)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
