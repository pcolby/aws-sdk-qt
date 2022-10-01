// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMAPSPRITESREQUEST_H
#define QTAWS_GETMAPSPRITESREQUEST_H

#include "locationrequest.h"

namespace QtAws {
namespace Location {

class GetMapSpritesRequestPrivate;

class QTAWSLOCATION_EXPORT GetMapSpritesRequest : public LocationRequest {

public:
    GetMapSpritesRequest(const GetMapSpritesRequest &other);
    GetMapSpritesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMapSpritesRequest)

};

} // namespace Location
} // namespace QtAws

#endif
