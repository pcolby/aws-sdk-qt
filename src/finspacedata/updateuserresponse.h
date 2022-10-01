// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERRESPONSE_H
#define QTAWS_UPDATEUSERRESPONSE_H

#include "finspacedataresponse.h"
#include "updateuserrequest.h"

namespace QtAws {
namespace FinspaceData {

class UpdateUserResponsePrivate;

class QTAWSFINSPACEDATA_EXPORT UpdateUserResponse : public FinspaceDataResponse {
    Q_OBJECT

public:
    UpdateUserResponse(const UpdateUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateUserResponse)
    Q_DISABLE_COPY(UpdateUserResponse)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
