// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFHIRDATASTORERESPONSE_H
#define QTAWS_CREATEFHIRDATASTORERESPONSE_H

#include "healthlakeresponse.h"
#include "createfhirdatastorerequest.h"

namespace QtAws {
namespace HealthLake {

class CreateFHIRDatastoreResponsePrivate;

class QTAWSHEALTHLAKE_EXPORT CreateFHIRDatastoreResponse : public HealthLakeResponse {
    Q_OBJECT

public:
    CreateFHIRDatastoreResponse(const CreateFHIRDatastoreRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateFHIRDatastoreRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFHIRDatastoreResponse)
    Q_DISABLE_COPY(CreateFHIRDatastoreResponse)

};

} // namespace HealthLake
} // namespace QtAws

#endif
