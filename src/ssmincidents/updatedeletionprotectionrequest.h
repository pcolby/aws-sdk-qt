// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDELETIONPROTECTIONREQUEST_H
#define QTAWS_UPDATEDELETIONPROTECTIONREQUEST_H

#include "ssmincidentsrequest.h"

namespace QtAws {
namespace SsmIncidents {

class UpdateDeletionProtectionRequestPrivate;

class QTAWSSSMINCIDENTS_EXPORT UpdateDeletionProtectionRequest : public SsmIncidentsRequest {

public:
    UpdateDeletionProtectionRequest(const UpdateDeletionProtectionRequest &other);
    UpdateDeletionProtectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDeletionProtectionRequest)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
