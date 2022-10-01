// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCATIONEFSREQUEST_H
#define QTAWS_CREATELOCATIONEFSREQUEST_H

#include "datasyncrequest.h"

namespace QtAws {
namespace DataSync {

class CreateLocationEfsRequestPrivate;

class QTAWSDATASYNC_EXPORT CreateLocationEfsRequest : public DataSyncRequest {

public:
    CreateLocationEfsRequest(const CreateLocationEfsRequest &other);
    CreateLocationEfsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLocationEfsRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
