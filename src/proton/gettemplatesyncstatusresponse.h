// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTEMPLATESYNCSTATUSRESPONSE_H
#define QTAWS_GETTEMPLATESYNCSTATUSRESPONSE_H

#include "protonresponse.h"
#include "gettemplatesyncstatusrequest.h"

namespace QtAws {
namespace Proton {

class GetTemplateSyncStatusResponsePrivate;

class QTAWSPROTON_EXPORT GetTemplateSyncStatusResponse : public ProtonResponse {
    Q_OBJECT

public:
    GetTemplateSyncStatusResponse(const GetTemplateSyncStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTemplateSyncStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTemplateSyncStatusResponse)
    Q_DISABLE_COPY(GetTemplateSyncStatusResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
