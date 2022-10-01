// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPINSTANCEADMINRESPONSE_H
#define QTAWS_CREATEAPPINSTANCEADMINRESPONSE_H

#include "chimeresponse.h"
#include "createappinstanceadminrequest.h"

namespace QtAws {
namespace Chime {

class CreateAppInstanceAdminResponsePrivate;

class QTAWSCHIME_EXPORT CreateAppInstanceAdminResponse : public ChimeResponse {
    Q_OBJECT

public:
    CreateAppInstanceAdminResponse(const CreateAppInstanceAdminRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAppInstanceAdminRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAppInstanceAdminResponse)
    Q_DISABLE_COPY(CreateAppInstanceAdminResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
