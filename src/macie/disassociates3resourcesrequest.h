// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATES3RESOURCESREQUEST_H
#define QTAWS_DISASSOCIATES3RESOURCESREQUEST_H

#include "macierequest.h"

namespace QtAws {
namespace Macie {

class DisassociateS3ResourcesRequestPrivate;

class QTAWSMACIE_EXPORT DisassociateS3ResourcesRequest : public MacieRequest {

public:
    DisassociateS3ResourcesRequest(const DisassociateS3ResourcesRequest &other);
    DisassociateS3ResourcesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateS3ResourcesRequest)

};

} // namespace Macie
} // namespace QtAws

#endif
