// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPREQUEST_H
#define QTAWS_DELETEAPPREQUEST_H

#include "resiliencehubrequest.h"

namespace QtAws {
namespace ResilienceHub {

class DeleteAppRequestPrivate;

class QTAWSRESILIENCEHUB_EXPORT DeleteAppRequest : public ResilienceHubRequest {

public:
    DeleteAppRequest(const DeleteAppRequest &other);
    DeleteAppRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAppRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
