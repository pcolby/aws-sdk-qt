// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFHIRDATASTORESRESPONSE_H
#define QTAWS_LISTFHIRDATASTORESRESPONSE_H

#include "healthlakeresponse.h"
#include "listfhirdatastoresrequest.h"

namespace QtAws {
namespace HealthLake {

class ListFHIRDatastoresResponsePrivate;

class QTAWSHEALTHLAKE_EXPORT ListFHIRDatastoresResponse : public HealthLakeResponse {
    Q_OBJECT

public:
    ListFHIRDatastoresResponse(const ListFHIRDatastoresRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFHIRDatastoresRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFHIRDatastoresResponse)
    Q_DISABLE_COPY(ListFHIRDatastoresResponse)

};

} // namespace HealthLake
} // namespace QtAws

#endif
