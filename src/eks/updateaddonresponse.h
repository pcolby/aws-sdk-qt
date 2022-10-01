// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEADDONRESPONSE_H
#define QTAWS_UPDATEADDONRESPONSE_H

#include "eksresponse.h"
#include "updateaddonrequest.h"

namespace QtAws {
namespace Eks {

class UpdateAddonResponsePrivate;

class QTAWSEKS_EXPORT UpdateAddonResponse : public EksResponse {
    Q_OBJECT

public:
    UpdateAddonResponse(const UpdateAddonRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAddonRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAddonResponse)
    Q_DISABLE_COPY(UpdateAddonResponse)

};

} // namespace Eks
} // namespace QtAws

#endif
