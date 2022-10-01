// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASOURCEPACKAGESRESPONSE_H
#define QTAWS_LISTDATASOURCEPACKAGESRESPONSE_H

#include "detectiveresponse.h"
#include "listdatasourcepackagesrequest.h"

namespace QtAws {
namespace Detective {

class ListDatasourcePackagesResponsePrivate;

class QTAWSDETECTIVE_EXPORT ListDatasourcePackagesResponse : public DetectiveResponse {
    Q_OBJECT

public:
    ListDatasourcePackagesResponse(const ListDatasourcePackagesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDatasourcePackagesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDatasourcePackagesResponse)
    Q_DISABLE_COPY(ListDatasourcePackagesResponse)

};

} // namespace Detective
} // namespace QtAws

#endif
