// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCATIONFSXONTAPREQUEST_H
#define QTAWS_CREATELOCATIONFSXONTAPREQUEST_H

#include "datasyncrequest.h"

namespace QtAws {
namespace DataSync {

class CreateLocationFsxOntapRequestPrivate;

class QTAWSDATASYNC_EXPORT CreateLocationFsxOntapRequest : public DataSyncRequest {

public:
    CreateLocationFsxOntapRequest(const CreateLocationFsxOntapRequest &other);
    CreateLocationFsxOntapRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLocationFsxOntapRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
