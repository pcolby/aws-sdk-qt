// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTS3RESOURCESREQUEST_H
#define QTAWS_LISTS3RESOURCESREQUEST_H

#include "macierequest.h"

namespace QtAws {
namespace Macie {

class ListS3ResourcesRequestPrivate;

class QTAWSMACIE_EXPORT ListS3ResourcesRequest : public MacieRequest {

public:
    ListS3ResourcesRequest(const ListS3ResourcesRequest &other);
    ListS3ResourcesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListS3ResourcesRequest)

};

} // namespace Macie
} // namespace QtAws

#endif
