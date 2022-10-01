// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHTYPEDLINKREQUEST_H
#define QTAWS_DETACHTYPEDLINKREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class DetachTypedLinkRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT DetachTypedLinkRequest : public CloudDirectoryRequest {

public:
    DetachTypedLinkRequest(const DetachTypedLinkRequest &other);
    DetachTypedLinkRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachTypedLinkRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
