// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEDIRECTORYREQUEST_H
#define QTAWS_ENABLEDIRECTORYREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class EnableDirectoryRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT EnableDirectoryRequest : public CloudDirectoryRequest {

public:
    EnableDirectoryRequest(const EnableDirectoryRequest &other);
    EnableDirectoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableDirectoryRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
