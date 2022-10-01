// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRELATIONALDATABASEBLUEPRINTSREQUEST_H
#define QTAWS_GETRELATIONALDATABASEBLUEPRINTSREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetRelationalDatabaseBlueprintsRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetRelationalDatabaseBlueprintsRequest : public LightsailRequest {

public:
    GetRelationalDatabaseBlueprintsRequest(const GetRelationalDatabaseBlueprintsRequest &other);
    GetRelationalDatabaseBlueprintsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRelationalDatabaseBlueprintsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
