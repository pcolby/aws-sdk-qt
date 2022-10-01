// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONSTRAINTRESPONSE_P_H
#define QTAWS_UPDATECONSTRAINTRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class UpdateConstraintResponse;

class UpdateConstraintResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit UpdateConstraintResponsePrivate(UpdateConstraintResponse * const q);

    void parseUpdateConstraintResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateConstraintResponse)
    Q_DISABLE_COPY(UpdateConstraintResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
