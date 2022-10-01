// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPHONENUMBERRESPONSE_H
#define QTAWS_DELETEPHONENUMBERRESPONSE_H

#include "chimeresponse.h"
#include "deletephonenumberrequest.h"

namespace QtAws {
namespace Chime {

class DeletePhoneNumberResponsePrivate;

class QTAWSCHIME_EXPORT DeletePhoneNumberResponse : public ChimeResponse {
    Q_OBJECT

public:
    DeletePhoneNumberResponse(const DeletePhoneNumberRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePhoneNumberRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePhoneNumberResponse)
    Q_DISABLE_COPY(DeletePhoneNumberResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
