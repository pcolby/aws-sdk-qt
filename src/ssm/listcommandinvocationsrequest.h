// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMMANDINVOCATIONSREQUEST_H
#define QTAWS_LISTCOMMANDINVOCATIONSREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class ListCommandInvocationsRequestPrivate;

class QTAWSSSM_EXPORT ListCommandInvocationsRequest : public SsmRequest {

public:
    ListCommandInvocationsRequest(const ListCommandInvocationsRequest &other);
    ListCommandInvocationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCommandInvocationsRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
