// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMAPGLYPHSREQUEST_H
#define QTAWS_GETMAPGLYPHSREQUEST_H

#include "locationrequest.h"

namespace QtAws {
namespace Location {

class GetMapGlyphsRequestPrivate;

class QTAWSLOCATION_EXPORT GetMapGlyphsRequest : public LocationRequest {

public:
    GetMapGlyphsRequest(const GetMapGlyphsRequest &other);
    GetMapGlyphsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMapGlyphsRequest)

};

} // namespace Location
} // namespace QtAws

#endif
