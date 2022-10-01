// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBLUEPRINTSREQUEST_H
#define QTAWS_GETBLUEPRINTSREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetBlueprintsRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetBlueprintsRequest : public LightsailRequest {

public:
    GetBlueprintsRequest(const GetBlueprintsRequest &other);
    GetBlueprintsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBlueprintsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
