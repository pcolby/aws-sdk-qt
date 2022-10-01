// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONSTRAINTRESPONSE_H
#define QTAWS_DELETECONSTRAINTRESPONSE_H

#include "servicecatalogresponse.h"
#include "deleteconstraintrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DeleteConstraintResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT DeleteConstraintResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    DeleteConstraintResponse(const DeleteConstraintRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteConstraintRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteConstraintResponse)
    Q_DISABLE_COPY(DeleteConstraintResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
