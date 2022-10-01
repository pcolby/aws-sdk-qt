// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONSTRAINTRESPONSE_P_H
#define QTAWS_DELETECONSTRAINTRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class DeleteConstraintResponse;

class DeleteConstraintResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit DeleteConstraintResponsePrivate(DeleteConstraintResponse * const q);

    void parseDeleteConstraintResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteConstraintResponse)
    Q_DISABLE_COPY(DeleteConstraintResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
