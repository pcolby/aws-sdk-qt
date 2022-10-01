// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMMANDSREQUEST_H
#define QTAWS_LISTCOMMANDSREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class ListCommandsRequestPrivate;

class QTAWSSSM_EXPORT ListCommandsRequest : public SsmRequest {

public:
    ListCommandsRequest(const ListCommandsRequest &other);
    ListCommandsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCommandsRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
