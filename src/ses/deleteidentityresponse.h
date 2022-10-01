// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIDENTITYRESPONSE_H
#define QTAWS_DELETEIDENTITYRESPONSE_H

#include "sesresponse.h"
#include "deleteidentityrequest.h"

namespace QtAws {
namespace Ses {

class DeleteIdentityResponsePrivate;

class QTAWSSES_EXPORT DeleteIdentityResponse : public SesResponse {
    Q_OBJECT

public:
    DeleteIdentityResponse(const DeleteIdentityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteIdentityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteIdentityResponse)
    Q_DISABLE_COPY(DeleteIdentityResponse)

};

} // namespace Ses
} // namespace QtAws

#endif
