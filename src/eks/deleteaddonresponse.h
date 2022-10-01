// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEADDONRESPONSE_H
#define QTAWS_DELETEADDONRESPONSE_H

#include "eksresponse.h"
#include "deleteaddonrequest.h"

namespace QtAws {
namespace Eks {

class DeleteAddonResponsePrivate;

class QTAWSEKS_EXPORT DeleteAddonResponse : public EksResponse {
    Q_OBJECT

public:
    DeleteAddonResponse(const DeleteAddonRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAddonRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAddonResponse)
    Q_DISABLE_COPY(DeleteAddonResponse)

};

} // namespace Eks
} // namespace QtAws

#endif
