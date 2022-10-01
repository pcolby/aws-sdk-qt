// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROTECTIONRESPONSE_H
#define QTAWS_DELETEPROTECTIONRESPONSE_H

#include "shieldresponse.h"
#include "deleteprotectionrequest.h"

namespace QtAws {
namespace Shield {

class DeleteProtectionResponsePrivate;

class QTAWSSHIELD_EXPORT DeleteProtectionResponse : public ShieldResponse {
    Q_OBJECT

public:
    DeleteProtectionResponse(const DeleteProtectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteProtectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteProtectionResponse)
    Q_DISABLE_COPY(DeleteProtectionResponse)

};

} // namespace Shield
} // namespace QtAws

#endif
