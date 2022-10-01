// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSFORVAULTRESPONSE_H
#define QTAWS_LISTTAGSFORVAULTRESPONSE_H

#include "glacierresponse.h"
#include "listtagsforvaultrequest.h"

namespace QtAws {
namespace Glacier {

class ListTagsForVaultResponsePrivate;

class QTAWSGLACIER_EXPORT ListTagsForVaultResponse : public GlacierResponse {
    Q_OBJECT

public:
    ListTagsForVaultResponse(const ListTagsForVaultRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTagsForVaultRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTagsForVaultResponse)
    Q_DISABLE_COPY(ListTagsForVaultResponse)

};

} // namespace Glacier
} // namespace QtAws

#endif
