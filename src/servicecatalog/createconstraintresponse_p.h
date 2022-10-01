// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONSTRAINTRESPONSE_P_H
#define QTAWS_CREATECONSTRAINTRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class CreateConstraintResponse;

class CreateConstraintResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit CreateConstraintResponsePrivate(CreateConstraintResponse * const q);

    void parseCreateConstraintResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateConstraintResponse)
    Q_DISABLE_COPY(CreateConstraintResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
