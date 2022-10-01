// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSOFTWAREUPDATESREQUEST_H
#define QTAWS_GETSOFTWAREUPDATESREQUEST_H

#include "snowballrequest.h"

namespace QtAws {
namespace Snowball {

class GetSoftwareUpdatesRequestPrivate;

class QTAWSSNOWBALL_EXPORT GetSoftwareUpdatesRequest : public SnowballRequest {

public:
    GetSoftwareUpdatesRequest(const GetSoftwareUpdatesRequest &other);
    GetSoftwareUpdatesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSoftwareUpdatesRequest)

};

} // namespace Snowball
} // namespace QtAws

#endif
