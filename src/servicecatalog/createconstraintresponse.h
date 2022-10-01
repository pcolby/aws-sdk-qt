// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONSTRAINTRESPONSE_H
#define QTAWS_CREATECONSTRAINTRESPONSE_H

#include "servicecatalogresponse.h"
#include "createconstraintrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class CreateConstraintResponsePrivate;

class QTAWSSERVICECATALOG_EXPORT CreateConstraintResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    CreateConstraintResponse(const CreateConstraintRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateConstraintRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateConstraintResponse)
    Q_DISABLE_COPY(CreateConstraintResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
