// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMAPSTYLEDESCRIPTORREQUEST_H
#define QTAWS_GETMAPSTYLEDESCRIPTORREQUEST_H

#include "locationrequest.h"

namespace QtAws {
namespace Location {

class GetMapStyleDescriptorRequestPrivate;

class QTAWSLOCATION_EXPORT GetMapStyleDescriptorRequest : public LocationRequest {

public:
    GetMapStyleDescriptorRequest(const GetMapStyleDescriptorRequest &other);
    GetMapStyleDescriptorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMapStyleDescriptorRequest)

};

} // namespace Location
} // namespace QtAws

#endif
