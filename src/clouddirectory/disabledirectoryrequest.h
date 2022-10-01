// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEDIRECTORYREQUEST_H
#define QTAWS_DISABLEDIRECTORYREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class DisableDirectoryRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT DisableDirectoryRequest : public CloudDirectoryRequest {

public:
    DisableDirectoryRequest(const DisableDirectoryRequest &other);
    DisableDirectoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableDirectoryRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
