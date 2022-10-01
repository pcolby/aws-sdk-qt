// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVERIFIEDEMAILADDRESSRESPONSE_H
#define QTAWS_DELETEVERIFIEDEMAILADDRESSRESPONSE_H

#include "sesresponse.h"
#include "deleteverifiedemailaddressrequest.h"

namespace QtAws {
namespace Ses {

class DeleteVerifiedEmailAddressResponsePrivate;

class QTAWSSES_EXPORT DeleteVerifiedEmailAddressResponse : public SesResponse {
    Q_OBJECT

public:
    DeleteVerifiedEmailAddressResponse(const DeleteVerifiedEmailAddressRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteVerifiedEmailAddressRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVerifiedEmailAddressResponse)
    Q_DISABLE_COPY(DeleteVerifiedEmailAddressResponse)

};

} // namespace Ses
} // namespace QtAws

#endif
