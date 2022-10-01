// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPLACEINDEXREQUEST_H
#define QTAWS_DELETEPLACEINDEXREQUEST_H

#include "locationrequest.h"

namespace QtAws {
namespace Location {

class DeletePlaceIndexRequestPrivate;

class QTAWSLOCATION_EXPORT DeletePlaceIndexRequest : public LocationRequest {

public:
    DeletePlaceIndexRequest(const DeletePlaceIndexRequest &other);
    DeletePlaceIndexRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePlaceIndexRequest)

};

} // namespace Location
} // namespace QtAws

#endif
