// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATAREPOSITORYTASKREQUEST_H
#define QTAWS_CREATEDATAREPOSITORYTASKREQUEST_H

#include "fsxrequest.h"

namespace QtAws {
namespace FSx {

class CreateDataRepositoryTaskRequestPrivate;

class QTAWSFSX_EXPORT CreateDataRepositoryTaskRequest : public FSxRequest {

public:
    CreateDataRepositoryTaskRequest(const CreateDataRepositoryTaskRequest &other);
    CreateDataRepositoryTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDataRepositoryTaskRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
