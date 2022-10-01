// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATES3RESOURCESREQUEST_H
#define QTAWS_UPDATES3RESOURCESREQUEST_H

#include "macierequest.h"

namespace QtAws {
namespace Macie {

class UpdateS3ResourcesRequestPrivate;

class QTAWSMACIE_EXPORT UpdateS3ResourcesRequest : public MacieRequest {

public:
    UpdateS3ResourcesRequest(const UpdateS3ResourcesRequest &other);
    UpdateS3ResourcesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateS3ResourcesRequest)

};

} // namespace Macie
} // namespace QtAws

#endif
