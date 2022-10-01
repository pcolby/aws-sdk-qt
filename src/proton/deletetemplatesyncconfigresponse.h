// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETEMPLATESYNCCONFIGRESPONSE_H
#define QTAWS_DELETETEMPLATESYNCCONFIGRESPONSE_H

#include "protonresponse.h"
#include "deletetemplatesyncconfigrequest.h"

namespace QtAws {
namespace Proton {

class DeleteTemplateSyncConfigResponsePrivate;

class QTAWSPROTON_EXPORT DeleteTemplateSyncConfigResponse : public ProtonResponse {
    Q_OBJECT

public:
    DeleteTemplateSyncConfigResponse(const DeleteTemplateSyncConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTemplateSyncConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTemplateSyncConfigResponse)
    Q_DISABLE_COPY(DeleteTemplateSyncConfigResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
