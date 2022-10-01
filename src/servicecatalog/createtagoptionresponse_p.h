// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETAGOPTIONRESPONSE_P_H
#define QTAWS_CREATETAGOPTIONRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class CreateTagOptionResponse;

class CreateTagOptionResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit CreateTagOptionResponsePrivate(CreateTagOptionResponse * const q);

    void parseCreateTagOptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTagOptionResponse)
    Q_DISABLE_COPY(CreateTagOptionResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
