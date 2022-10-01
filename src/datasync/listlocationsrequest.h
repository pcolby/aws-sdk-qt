// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLOCATIONSREQUEST_H
#define QTAWS_LISTLOCATIONSREQUEST_H

#include "datasyncrequest.h"

namespace QtAws {
namespace DataSync {

class ListLocationsRequestPrivate;

class QTAWSDATASYNC_EXPORT ListLocationsRequest : public DataSyncRequest {

public:
    ListLocationsRequest(const ListLocationsRequest &other);
    ListLocationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLocationsRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
