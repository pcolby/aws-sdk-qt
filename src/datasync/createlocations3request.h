// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCATIONS3REQUEST_H
#define QTAWS_CREATELOCATIONS3REQUEST_H

#include "datasyncrequest.h"

namespace QtAws {
namespace DataSync {

class CreateLocationS3RequestPrivate;

class QTAWSDATASYNC_EXPORT CreateLocationS3Request : public DataSyncRequest {

public:
    CreateLocationS3Request(const CreateLocationS3Request &other);
    CreateLocationS3Request();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLocationS3Request)

};

} // namespace DataSync
} // namespace QtAws

#endif
