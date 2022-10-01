// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTEMPLATESYNCCONFIGRESPONSE_H
#define QTAWS_GETTEMPLATESYNCCONFIGRESPONSE_H

#include "protonresponse.h"
#include "gettemplatesyncconfigrequest.h"

namespace QtAws {
namespace Proton {

class GetTemplateSyncConfigResponsePrivate;

class QTAWSPROTON_EXPORT GetTemplateSyncConfigResponse : public ProtonResponse {
    Q_OBJECT

public:
    GetTemplateSyncConfigResponse(const GetTemplateSyncConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTemplateSyncConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTemplateSyncConfigResponse)
    Q_DISABLE_COPY(GetTemplateSyncConfigResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
