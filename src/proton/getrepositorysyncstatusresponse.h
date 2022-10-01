// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPOSITORYSYNCSTATUSRESPONSE_H
#define QTAWS_GETREPOSITORYSYNCSTATUSRESPONSE_H

#include "protonresponse.h"
#include "getrepositorysyncstatusrequest.h"

namespace QtAws {
namespace Proton {

class GetRepositorySyncStatusResponsePrivate;

class QTAWSPROTON_EXPORT GetRepositorySyncStatusResponse : public ProtonResponse {
    Q_OBJECT

public:
    GetRepositorySyncStatusResponse(const GetRepositorySyncStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRepositorySyncStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRepositorySyncStatusResponse)
    Q_DISABLE_COPY(GetRepositorySyncStatusResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
