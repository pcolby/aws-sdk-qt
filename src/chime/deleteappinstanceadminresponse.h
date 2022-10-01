// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPINSTANCEADMINRESPONSE_H
#define QTAWS_DELETEAPPINSTANCEADMINRESPONSE_H

#include "chimeresponse.h"
#include "deleteappinstanceadminrequest.h"

namespace QtAws {
namespace Chime {

class DeleteAppInstanceAdminResponsePrivate;

class QTAWSCHIME_EXPORT DeleteAppInstanceAdminResponse : public ChimeResponse {
    Q_OBJECT

public:
    DeleteAppInstanceAdminResponse(const DeleteAppInstanceAdminRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAppInstanceAdminRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAppInstanceAdminResponse)
    Q_DISABLE_COPY(DeleteAppInstanceAdminResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
