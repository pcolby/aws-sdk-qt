// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOCUMENTMETADATAHISTORYREQUEST_H
#define QTAWS_LISTDOCUMENTMETADATAHISTORYREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class ListDocumentMetadataHistoryRequestPrivate;

class QTAWSSSM_EXPORT ListDocumentMetadataHistoryRequest : public SsmRequest {

public:
    ListDocumentMetadataHistoryRequest(const ListDocumentMetadataHistoryRequest &other);
    ListDocumentMetadataHistoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDocumentMetadataHistoryRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
