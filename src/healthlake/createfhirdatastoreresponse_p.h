// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFHIRDATASTORERESPONSE_P_H
#define QTAWS_CREATEFHIRDATASTORERESPONSE_P_H

#include "healthlakeresponse_p.h"

namespace QtAws {
namespace HealthLake {

class CreateFHIRDatastoreResponse;

class CreateFHIRDatastoreResponsePrivate : public HealthLakeResponsePrivate {

public:

    explicit CreateFHIRDatastoreResponsePrivate(CreateFHIRDatastoreResponse * const q);

    void parseCreateFHIRDatastoreResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateFHIRDatastoreResponse)
    Q_DISABLE_COPY(CreateFHIRDatastoreResponsePrivate)

};

} // namespace HealthLake
} // namespace QtAws

#endif
