// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETEMPLATESYNCCONFIGRESPONSE_H
#define QTAWS_CREATETEMPLATESYNCCONFIGRESPONSE_H

#include "protonresponse.h"
#include "createtemplatesyncconfigrequest.h"

namespace QtAws {
namespace Proton {

class CreateTemplateSyncConfigResponsePrivate;

class QTAWSPROTON_EXPORT CreateTemplateSyncConfigResponse : public ProtonResponse {
    Q_OBJECT

public:
    CreateTemplateSyncConfigResponse(const CreateTemplateSyncConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTemplateSyncConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTemplateSyncConfigResponse)
    Q_DISABLE_COPY(CreateTemplateSyncConfigResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
