// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBMANIFESTREQUEST_H
#define QTAWS_GETJOBMANIFESTREQUEST_H

#include "snowballrequest.h"

namespace QtAws {
namespace Snowball {

class GetJobManifestRequestPrivate;

class QTAWSSNOWBALL_EXPORT GetJobManifestRequest : public SnowballRequest {

public:
    GetJobManifestRequest(const GetJobManifestRequest &other);
    GetJobManifestRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetJobManifestRequest)

};

} // namespace Snowball
} // namespace QtAws

#endif
