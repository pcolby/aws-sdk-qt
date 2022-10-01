// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETAGOPTIONRESPONSE_P_H
#define QTAWS_UPDATETAGOPTIONRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class UpdateTagOptionResponse;

class UpdateTagOptionResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit UpdateTagOptionResponsePrivate(UpdateTagOptionResponse * const q);

    void parseUpdateTagOptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateTagOptionResponse)
    Q_DISABLE_COPY(UpdateTagOptionResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
