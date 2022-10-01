// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETEMPLATESYNCCONFIGRESPONSE_H
#define QTAWS_UPDATETEMPLATESYNCCONFIGRESPONSE_H

#include "protonresponse.h"
#include "updatetemplatesyncconfigrequest.h"

namespace QtAws {
namespace Proton {

class UpdateTemplateSyncConfigResponsePrivate;

class QTAWSPROTON_EXPORT UpdateTemplateSyncConfigResponse : public ProtonResponse {
    Q_OBJECT

public:
    UpdateTemplateSyncConfigResponse(const UpdateTemplateSyncConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateTemplateSyncConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTemplateSyncConfigResponse)
    Q_DISABLE_COPY(UpdateTemplateSyncConfigResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
