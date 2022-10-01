// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFHIRDATASTORESRESPONSE_P_H
#define QTAWS_LISTFHIRDATASTORESRESPONSE_P_H

#include "healthlakeresponse_p.h"

namespace QtAws {
namespace HealthLake {

class ListFHIRDatastoresResponse;

class ListFHIRDatastoresResponsePrivate : public HealthLakeResponsePrivate {

public:

    explicit ListFHIRDatastoresResponsePrivate(ListFHIRDatastoresResponse * const q);

    void parseListFHIRDatastoresResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFHIRDatastoresResponse)
    Q_DISABLE_COPY(ListFHIRDatastoresResponsePrivate)

};

} // namespace HealthLake
} // namespace QtAws

#endif
