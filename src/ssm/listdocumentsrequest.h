// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOCUMENTSREQUEST_H
#define QTAWS_LISTDOCUMENTSREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class ListDocumentsRequestPrivate;

class QTAWSSSM_EXPORT ListDocumentsRequest : public SsmRequest {

public:
    ListDocumentsRequest(const ListDocumentsRequest &other);
    ListDocumentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDocumentsRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
