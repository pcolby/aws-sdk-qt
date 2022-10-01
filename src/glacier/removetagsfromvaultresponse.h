// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVETAGSFROMVAULTRESPONSE_H
#define QTAWS_REMOVETAGSFROMVAULTRESPONSE_H

#include "glacierresponse.h"
#include "removetagsfromvaultrequest.h"

namespace QtAws {
namespace Glacier {

class RemoveTagsFromVaultResponsePrivate;

class QTAWSGLACIER_EXPORT RemoveTagsFromVaultResponse : public GlacierResponse {
    Q_OBJECT

public:
    RemoveTagsFromVaultResponse(const RemoveTagsFromVaultRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemoveTagsFromVaultRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveTagsFromVaultResponse)
    Q_DISABLE_COPY(RemoveTagsFromVaultResponse)

};

} // namespace Glacier
} // namespace QtAws

#endif
