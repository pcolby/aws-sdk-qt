// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELDATAREPOSITORYTASKREQUEST_H
#define QTAWS_CANCELDATAREPOSITORYTASKREQUEST_H

#include "fsxrequest.h"

namespace QtAws {
namespace FSx {

class CancelDataRepositoryTaskRequestPrivate;

class QTAWSFSX_EXPORT CancelDataRepositoryTaskRequest : public FSxRequest {

public:
    CancelDataRepositoryTaskRequest(const CancelDataRepositoryTaskRequest &other);
    CancelDataRepositoryTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelDataRepositoryTaskRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
