// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTACHEDINDICESREQUEST_H
#define QTAWS_LISTATTACHEDINDICESREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListAttachedIndicesRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT ListAttachedIndicesRequest : public CloudDirectoryRequest {

public:
    ListAttachedIndicesRequest(const ListAttachedIndicesRequest &other);
    ListAttachedIndicesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAttachedIndicesRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
