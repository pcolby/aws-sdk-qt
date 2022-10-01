// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMAPREQUEST_H
#define QTAWS_DELETEMAPREQUEST_H

#include "locationrequest.h"

namespace QtAws {
namespace Location {

class DeleteMapRequestPrivate;

class QTAWSLOCATION_EXPORT DeleteMapRequest : public LocationRequest {

public:
    DeleteMapRequest(const DeleteMapRequest &other);
    DeleteMapRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMapRequest)

};

} // namespace Location
} // namespace QtAws

#endif
