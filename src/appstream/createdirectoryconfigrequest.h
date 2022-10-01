// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDIRECTORYCONFIGREQUEST_H
#define QTAWS_CREATEDIRECTORYCONFIGREQUEST_H

#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class CreateDirectoryConfigRequestPrivate;

class QTAWSAPPSTREAM_EXPORT CreateDirectoryConfigRequest : public AppStreamRequest {

public:
    CreateDirectoryConfigRequest(const CreateDirectoryConfigRequest &other);
    CreateDirectoryConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDirectoryConfigRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
