// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDIRECTORIESREQUEST_H
#define QTAWS_LISTDIRECTORIESREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListDirectoriesRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT ListDirectoriesRequest : public CloudDirectoryRequest {

public:
    ListDirectoriesRequest(const ListDirectoriesRequest &other);
    ListDirectoriesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDirectoriesRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
