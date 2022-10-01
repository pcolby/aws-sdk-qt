// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOCUMENTREQUEST_H
#define QTAWS_GETDOCUMENTREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class GetDocumentRequestPrivate;

class QTAWSSSM_EXPORT GetDocumentRequest : public SsmRequest {

public:
    GetDocumentRequest(const GetDocumentRequest &other);
    GetDocumentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDocumentRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
