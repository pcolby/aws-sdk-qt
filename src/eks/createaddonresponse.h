// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEADDONRESPONSE_H
#define QTAWS_CREATEADDONRESPONSE_H

#include "eksresponse.h"
#include "createaddonrequest.h"

namespace QtAws {
namespace Eks {

class CreateAddonResponsePrivate;

class QTAWSEKS_EXPORT CreateAddonResponse : public EksResponse {
    Q_OBJECT

public:
    CreateAddonResponse(const CreateAddonRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAddonRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAddonResponse)
    Q_DISABLE_COPY(CreateAddonResponse)

};

} // namespace Eks
} // namespace QtAws

#endif
