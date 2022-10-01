// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOCUMENTVERSIONSREQUEST_H
#define QTAWS_LISTDOCUMENTVERSIONSREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class ListDocumentVersionsRequestPrivate;

class QTAWSSSM_EXPORT ListDocumentVersionsRequest : public SsmRequest {

public:
    ListDocumentVersionsRequest(const ListDocumentVersionsRequest &other);
    ListDocumentVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDocumentVersionsRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
