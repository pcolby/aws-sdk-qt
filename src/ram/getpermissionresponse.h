// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPERMISSIONRESPONSE_H
#define QTAWS_GETPERMISSIONRESPONSE_H

#include "ramresponse.h"
#include "getpermissionrequest.h"

namespace QtAws {
namespace Ram {

class GetPermissionResponsePrivate;

class QTAWSRAM_EXPORT GetPermissionResponse : public RamResponse {
    Q_OBJECT

public:
    GetPermissionResponse(const GetPermissionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPermissionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPermissionResponse)
    Q_DISABLE_COPY(GetPermissionResponse)

};

} // namespace Ram
} // namespace QtAws

#endif
