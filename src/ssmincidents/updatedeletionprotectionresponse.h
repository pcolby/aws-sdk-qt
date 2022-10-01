// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDELETIONPROTECTIONRESPONSE_H
#define QTAWS_UPDATEDELETIONPROTECTIONRESPONSE_H

#include "ssmincidentsresponse.h"
#include "updatedeletionprotectionrequest.h"

namespace QtAws {
namespace SsmIncidents {

class UpdateDeletionProtectionResponsePrivate;

class QTAWSSSMINCIDENTS_EXPORT UpdateDeletionProtectionResponse : public SsmIncidentsResponse {
    Q_OBJECT

public:
    UpdateDeletionProtectionResponse(const UpdateDeletionProtectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDeletionProtectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDeletionProtectionResponse)
    Q_DISABLE_COPY(UpdateDeletionProtectionResponse)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
