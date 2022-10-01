// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCOUNTSETTINGRESPONSE_H
#define QTAWS_DELETEACCOUNTSETTINGRESPONSE_H

#include "ecsresponse.h"
#include "deleteaccountsettingrequest.h"

namespace QtAws {
namespace Ecs {

class DeleteAccountSettingResponsePrivate;

class QTAWSECS_EXPORT DeleteAccountSettingResponse : public EcsResponse {
    Q_OBJECT

public:
    DeleteAccountSettingResponse(const DeleteAccountSettingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAccountSettingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAccountSettingResponse)
    Q_DISABLE_COPY(DeleteAccountSettingResponse)

};

} // namespace Ecs
} // namespace QtAws

#endif
