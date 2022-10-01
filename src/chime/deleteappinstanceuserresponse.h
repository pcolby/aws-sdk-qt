// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPINSTANCEUSERRESPONSE_H
#define QTAWS_DELETEAPPINSTANCEUSERRESPONSE_H

#include "chimeresponse.h"
#include "deleteappinstanceuserrequest.h"

namespace QtAws {
namespace Chime {

class DeleteAppInstanceUserResponsePrivate;

class QTAWSCHIME_EXPORT DeleteAppInstanceUserResponse : public ChimeResponse {
    Q_OBJECT

public:
    DeleteAppInstanceUserResponse(const DeleteAppInstanceUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAppInstanceUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAppInstanceUserResponse)
    Q_DISABLE_COPY(DeleteAppInstanceUserResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
