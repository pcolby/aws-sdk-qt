// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPERMISSIONRESPONSE_H
#define QTAWS_CREATEPERMISSIONRESPONSE_H

#include "acmpcaresponse.h"
#include "createpermissionrequest.h"

namespace QtAws {
namespace AcmPca {

class CreatePermissionResponsePrivate;

class QTAWSACMPCA_EXPORT CreatePermissionResponse : public AcmPcaResponse {
    Q_OBJECT

public:
    CreatePermissionResponse(const CreatePermissionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePermissionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePermissionResponse)
    Q_DISABLE_COPY(CreatePermissionResponse)

};

} // namespace AcmPca
} // namespace QtAws

#endif
