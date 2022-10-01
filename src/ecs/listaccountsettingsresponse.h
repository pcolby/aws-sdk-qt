// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTSETTINGSRESPONSE_H
#define QTAWS_LISTACCOUNTSETTINGSRESPONSE_H

#include "ecsresponse.h"
#include "listaccountsettingsrequest.h"

namespace QtAws {
namespace Ecs {

class ListAccountSettingsResponsePrivate;

class QTAWSECS_EXPORT ListAccountSettingsResponse : public EcsResponse {
    Q_OBJECT

public:
    ListAccountSettingsResponse(const ListAccountSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAccountSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAccountSettingsResponse)
    Q_DISABLE_COPY(ListAccountSettingsResponse)

};

} // namespace Ecs
} // namespace QtAws

#endif
