// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMAPTILEREQUEST_H
#define QTAWS_GETMAPTILEREQUEST_H

#include "locationrequest.h"

namespace QtAws {
namespace Location {

class GetMapTileRequestPrivate;

class QTAWSLOCATION_EXPORT GetMapTileRequest : public LocationRequest {

public:
    GetMapTileRequest(const GetMapTileRequest &other);
    GetMapTileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMapTileRequest)

};

} // namespace Location
} // namespace QtAws

#endif
