// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFHIRDATASTORERESPONSE_H
#define QTAWS_DESCRIBEFHIRDATASTORERESPONSE_H

#include "healthlakeresponse.h"
#include "describefhirdatastorerequest.h"

namespace QtAws {
namespace HealthLake {

class DescribeFHIRDatastoreResponsePrivate;

class QTAWSHEALTHLAKE_EXPORT DescribeFHIRDatastoreResponse : public HealthLakeResponse {
    Q_OBJECT

public:
    DescribeFHIRDatastoreResponse(const DescribeFHIRDatastoreRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeFHIRDatastoreRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFHIRDatastoreResponse)
    Q_DISABLE_COPY(DescribeFHIRDatastoreResponse)

};

} // namespace HealthLake
} // namespace QtAws

#endif
