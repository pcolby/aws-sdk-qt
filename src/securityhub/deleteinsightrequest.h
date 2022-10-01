// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINSIGHTREQUEST_H
#define QTAWS_DELETEINSIGHTREQUEST_H

#include "securityhubrequest.h"

namespace QtAws {
namespace SecurityHub {

class DeleteInsightRequestPrivate;

class QTAWSSECURITYHUB_EXPORT DeleteInsightRequest : public SecurityHubRequest {

public:
    DeleteInsightRequest(const DeleteInsightRequest &other);
    DeleteInsightRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteInsightRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
