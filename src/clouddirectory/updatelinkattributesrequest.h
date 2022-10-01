// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELINKATTRIBUTESREQUEST_H
#define QTAWS_UPDATELINKATTRIBUTESREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class UpdateLinkAttributesRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT UpdateLinkAttributesRequest : public CloudDirectoryRequest {

public:
    UpdateLinkAttributesRequest(const UpdateLinkAttributesRequest &other);
    UpdateLinkAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLinkAttributesRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
