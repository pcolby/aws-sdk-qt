// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPRIMARYEMAILADDRESSRESPONSE_H
#define QTAWS_UPDATEPRIMARYEMAILADDRESSRESPONSE_H

#include "workmailresponse.h"
#include "updateprimaryemailaddressrequest.h"

namespace QtAws {
namespace WorkMail {

class UpdatePrimaryEmailAddressResponsePrivate;

class QTAWSWORKMAIL_EXPORT UpdatePrimaryEmailAddressResponse : public WorkMailResponse {
    Q_OBJECT

public:
    UpdatePrimaryEmailAddressResponse(const UpdatePrimaryEmailAddressRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdatePrimaryEmailAddressRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePrimaryEmailAddressResponse)
    Q_DISABLE_COPY(UpdatePrimaryEmailAddressResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
