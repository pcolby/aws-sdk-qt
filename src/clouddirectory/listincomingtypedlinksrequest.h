// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINCOMINGTYPEDLINKSREQUEST_H
#define QTAWS_LISTINCOMINGTYPEDLINKSREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListIncomingTypedLinksRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT ListIncomingTypedLinksRequest : public CloudDirectoryRequest {

public:
    ListIncomingTypedLinksRequest(const ListIncomingTypedLinksRequest &other);
    ListIncomingTypedLinksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListIncomingTypedLinksRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
