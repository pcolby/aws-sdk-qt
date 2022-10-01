// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVAULTRESPONSE_H
#define QTAWS_CREATEVAULTRESPONSE_H

#include "glacierresponse.h"
#include "createvaultrequest.h"

namespace QtAws {
namespace Glacier {

class CreateVaultResponsePrivate;

class QTAWSGLACIER_EXPORT CreateVaultResponse : public GlacierResponse {
    Q_OBJECT

public:
    CreateVaultResponse(const CreateVaultRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateVaultRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVaultResponse)
    Q_DISABLE_COPY(CreateVaultResponse)

};

} // namespace Glacier
} // namespace QtAws

#endif
