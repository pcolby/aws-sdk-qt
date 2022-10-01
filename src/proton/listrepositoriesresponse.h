// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPOSITORIESRESPONSE_H
#define QTAWS_LISTREPOSITORIESRESPONSE_H

#include "protonresponse.h"
#include "listrepositoriesrequest.h"

namespace QtAws {
namespace Proton {

class ListRepositoriesResponsePrivate;

class QTAWSPROTON_EXPORT ListRepositoriesResponse : public ProtonResponse {
    Q_OBJECT

public:
    ListRepositoriesResponse(const ListRepositoriesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRepositoriesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRepositoriesResponse)
    Q_DISABLE_COPY(ListRepositoriesResponse)

};

} // namespace Proton
} // namespace QtAws

#endif
