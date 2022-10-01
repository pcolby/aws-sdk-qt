// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONSTRAINTRESPONSE_H
#define QTAWS_UPDATECONSTRAINTRESPONSE_H

#include "servicecatalogresponse.h"
#include "updateconstraintrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class UpdateConstraintResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT UpdateConstraintResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    UpdateConstraintResponse(const UpdateConstraintRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateConstraintRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateConstraintResponse)
    Q_DISABLE_COPY(UpdateConstraintResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
