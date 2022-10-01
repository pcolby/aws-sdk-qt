// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATES3RESOURCESREQUEST_H
#define QTAWS_ASSOCIATES3RESOURCESREQUEST_H

#include "macierequest.h"

namespace QtAws {
namespace Macie {

class AssociateS3ResourcesRequestPrivate;

class QTAWSMACIE_EXPORT AssociateS3ResourcesRequest : public MacieRequest {

public:
    AssociateS3ResourcesRequest(const AssociateS3ResourcesRequest &other);
    AssociateS3ResourcesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateS3ResourcesRequest)

};

} // namespace Macie
} // namespace QtAws

#endif
