// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLINKATTRIBUTESREQUEST_H
#define QTAWS_GETLINKATTRIBUTESREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class GetLinkAttributesRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT GetLinkAttributesRequest : public CloudDirectoryRequest {

public:
    GetLinkAttributesRequest(const GetLinkAttributesRequest &other);
    GetLinkAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLinkAttributesRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
