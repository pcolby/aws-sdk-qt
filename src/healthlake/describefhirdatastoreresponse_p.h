// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFHIRDATASTORERESPONSE_P_H
#define QTAWS_DESCRIBEFHIRDATASTORERESPONSE_P_H

#include "healthlakeresponse_p.h"

namespace QtAws {
namespace HealthLake {

class DescribeFHIRDatastoreResponse;

class DescribeFHIRDatastoreResponsePrivate : public HealthLakeResponsePrivate {

public:

    explicit DescribeFHIRDatastoreResponsePrivate(DescribeFHIRDatastoreResponse * const q);

    void parseDescribeFHIRDatastoreResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFHIRDatastoreResponse)
    Q_DISABLE_COPY(DescribeFHIRDatastoreResponsePrivate)

};

} // namespace HealthLake
} // namespace QtAws

#endif
