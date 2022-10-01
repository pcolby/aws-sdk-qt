// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDIRECTORYCONFIGREQUEST_H
#define QTAWS_UPDATEDIRECTORYCONFIGREQUEST_H

#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class UpdateDirectoryConfigRequestPrivate;

class QTAWSAPPSTREAM_EXPORT UpdateDirectoryConfigRequest : public AppStreamRequest {

public:
    UpdateDirectoryConfigRequest(const UpdateDirectoryConfigRequest &other);
    UpdateDirectoryConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDirectoryConfigRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
