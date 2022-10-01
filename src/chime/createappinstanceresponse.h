// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPINSTANCERESPONSE_H
#define QTAWS_CREATEAPPINSTANCERESPONSE_H

#include "chimeresponse.h"
#include "createappinstancerequest.h"

namespace QtAws {
namespace Chime {

class CreateAppInstanceResponsePrivate;

class QTAWSCHIME_EXPORT CreateAppInstanceResponse : public ChimeResponse {
    Q_OBJECT

public:
    CreateAppInstanceResponse(const CreateAppInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAppInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAppInstanceResponse)
    Q_DISABLE_COPY(CreateAppInstanceResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
