// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGROUPVERSIONREQUEST_H
#define QTAWS_GETGROUPVERSIONREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class GetGroupVersionRequestPrivate;

class QTAWSGREENGRASS_EXPORT GetGroupVersionRequest : public GreengrassRequest {

public:
    GetGroupVersionRequest(const GetGroupVersionRequest &other);
    GetGroupVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGroupVersionRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
