// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDPROFILEPERMISSIONRESPONSE_H
#define QTAWS_ADDPROFILEPERMISSIONRESPONSE_H

#include "signerresponse.h"
#include "addprofilepermissionrequest.h"

namespace QtAws {
namespace Signer {

class AddProfilePermissionResponsePrivate;

class QTAWSSIGNER_EXPORT AddProfilePermissionResponse : public SignerResponse {
    Q_OBJECT

public:
    AddProfilePermissionResponse(const AddProfilePermissionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddProfilePermissionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddProfilePermissionResponse)
    Q_DISABLE_COPY(AddProfilePermissionResponse)

};

} // namespace Signer
} // namespace QtAws

#endif
