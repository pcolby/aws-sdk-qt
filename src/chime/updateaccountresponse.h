// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCOUNTRESPONSE_H
#define QTAWS_UPDATEACCOUNTRESPONSE_H

#include "chimeresponse.h"
#include "updateaccountrequest.h"

namespace QtAws {
namespace Chime {

class UpdateAccountResponsePrivate;

class QTAWSCHIME_EXPORT UpdateAccountResponse : public ChimeResponse {
    Q_OBJECT

public:
    UpdateAccountResponse(const UpdateAccountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAccountRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAccountResponse)
    Q_DISABLE_COPY(UpdateAccountResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
