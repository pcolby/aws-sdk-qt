// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVICEREQUEST_H
#define QTAWS_DELETESERVICEREQUEST_H

#include "apprunnerrequest.h"

namespace QtAws {
namespace AppRunner {

class DeleteServiceRequestPrivate;

class QTAWSAPPRUNNER_EXPORT DeleteServiceRequest : public AppRunnerRequest {

public:
    DeleteServiceRequest(const DeleteServiceRequest &other);
    DeleteServiceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteServiceRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif
