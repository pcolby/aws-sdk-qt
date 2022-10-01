// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTACCESSLOGGINGREQUEST_H
#define QTAWS_STARTACCESSLOGGINGREQUEST_H

#include "mediastorerequest.h"

namespace QtAws {
namespace MediaStore {

class StartAccessLoggingRequestPrivate;

class QTAWSMEDIASTORE_EXPORT StartAccessLoggingRequest : public MediaStoreRequest {

public:
    StartAccessLoggingRequest(const StartAccessLoggingRequest &other);
    StartAccessLoggingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartAccessLoggingRequest)

};

} // namespace MediaStore
} // namespace QtAws

#endif
