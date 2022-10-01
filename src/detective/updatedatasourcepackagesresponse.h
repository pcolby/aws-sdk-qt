// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATASOURCEPACKAGESRESPONSE_H
#define QTAWS_UPDATEDATASOURCEPACKAGESRESPONSE_H

#include "detectiveresponse.h"
#include "updatedatasourcepackagesrequest.h"

namespace QtAws {
namespace Detective {

class UpdateDatasourcePackagesResponsePrivate;

class QTAWSDETECTIVE_EXPORT UpdateDatasourcePackagesResponse : public DetectiveResponse {
    Q_OBJECT

public:
    UpdateDatasourcePackagesResponse(const UpdateDatasourcePackagesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDatasourcePackagesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDatasourcePackagesResponse)
    Q_DISABLE_COPY(UpdateDatasourcePackagesResponse)

};

} // namespace Detective
} // namespace QtAws

#endif
