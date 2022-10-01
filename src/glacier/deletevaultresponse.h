// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVAULTRESPONSE_H
#define QTAWS_DELETEVAULTRESPONSE_H

#include "glacierresponse.h"
#include "deletevaultrequest.h"

namespace QtAws {
namespace Glacier {

class DeleteVaultResponsePrivate;

class QTAWSGLACIER_EXPORT DeleteVaultResponse : public GlacierResponse {
    Q_OBJECT

public:
    DeleteVaultResponse(const DeleteVaultRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteVaultRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVaultResponse)
    Q_DISABLE_COPY(DeleteVaultResponse)

};

} // namespace Glacier
} // namespace QtAws

#endif
