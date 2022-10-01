// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPERMISSIONRESPONSE_H
#define QTAWS_DELETEPERMISSIONRESPONSE_H

#include "acmpcaresponse.h"
#include "deletepermissionrequest.h"

namespace QtAws {
namespace AcmPca {

class DeletePermissionResponsePrivate;

class QTAWSACMPCA_EXPORT DeletePermissionResponse : public AcmPcaResponse {
    Q_OBJECT

public:
    DeletePermissionResponse(const DeletePermissionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePermissionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePermissionResponse)
    Q_DISABLE_COPY(DeletePermissionResponse)

};

} // namespace AcmPca
} // namespace QtAws

#endif
