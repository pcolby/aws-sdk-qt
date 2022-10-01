// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFHIRDATASTORERESPONSE_P_H
#define QTAWS_DELETEFHIRDATASTORERESPONSE_P_H

#include "healthlakeresponse_p.h"

namespace QtAws {
namespace HealthLake {

class DeleteFHIRDatastoreResponse;

class DeleteFHIRDatastoreResponsePrivate : public HealthLakeResponsePrivate {

public:

    explicit DeleteFHIRDatastoreResponsePrivate(DeleteFHIRDatastoreResponse * const q);

    void parseDeleteFHIRDatastoreResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFHIRDatastoreResponse)
    Q_DISABLE_COPY(DeleteFHIRDatastoreResponsePrivate)

};

} // namespace HealthLake
} // namespace QtAws

#endif
